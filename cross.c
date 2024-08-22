#include <stdio.h>

int main()
{
    int rows ;
    printf("Please enter the squar matrix row value\n");
    scanf("%d",&rows);
   
    int value  = rows+1;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i == j  || i+j == value )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
            
        }
        printf("\n");
    }

    return 0;
}