#include <stdio.h>

int main() {
    int rows;
    int col;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    col = 2 * rows - 1;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= col; j++) {
            if (j >= (rows - (i - 1)) && j <= (rows + (i - 1))) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
