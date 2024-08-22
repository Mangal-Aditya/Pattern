#include <stdio.h>
#include <math.h>
int main()
{
    int rows ;
    printf("Please enter the squar matrix row value\n");
    scanf("%d",&rows);
   printf("\n");

    int value  = ((rows/2)+1)+rows;
    int value2 = ((rows/2)+1)+1;
 
    int value3 = (int)pow((((rows/2)+1)-1),2);
   
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i+j == value2 || i+j == value || (int)pow(j-i,2) == value3)
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