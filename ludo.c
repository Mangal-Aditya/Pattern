#include <stdio.h>

int main()
{
    int value;
    printf("Enter which face of the ludo you want to see either 1,2,3,4,5,6\n");
    scanf("%d", &value);
    printf("\n");

    switch (value)
    {
    case (1):
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
        break;
    case (2):
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        printf("\n");
        break;
    case (3):
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        printf("\n");
        break;
    case (4):

        for (int i = 1; i <= 5; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (j == 0 || i == j || i + j == 10)
                {
                    printf("* ");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");

        break;
    case (5):
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (i == j || i + j == 10)
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
        printf("\n");
        break;
    case (6):
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= 10; j++)
            {
                if (j == 10 || i == j || i + j == 10)
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
        printf("\n");
        break;

    default:
        printf("The value is  not between 1 to 6\n");
        break;
    }
    return 0;
}