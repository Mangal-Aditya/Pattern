#include <stdio.h>

int main()
{
    int n;

    printf("Enter how many number of rows you want \t");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < (n - i - 1))
            {
                printf("  ");
            }
            else
            {
                printf("* " );
            }
        }

        printf("\n");
    }

    return 0;
}