#include <stdio.h>

int main()
{
    int rows, columns;
    printf("Enter the Rows count\n");
    scanf("%d", &rows);
    printf("Enter the column count\n");
    scanf("%d", &columns);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == columns)
            { 
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}