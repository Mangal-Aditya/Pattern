#include <stdio.h>

int main()
{
    int i,n,k;
    int j;
    k = 0;
    printf("Enter how many number of rows you want \t");
    scanf("%d",&n);
    for ( i = 2; i < n+2; i++)
    {
        for (j = 1; j < i; j++)
        {
          printf("%d ",j+k);
        }
        k = (j+k)-1;

        printf("\n");
    }
    
    return 0;
}