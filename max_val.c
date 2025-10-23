#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;
    int max;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter number in the first matrix at position [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    max = matrix[0][0];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    printf("\nMaximum value you entered = %d\n", max);
    return 0;
}
