// transpose variable size matrix function, 08-e12A modified

#include <stdio.h>

int main(void) {

    void transposeMatrix(int x, int y, int A[y][x], int B[x][y]);

    int x, y, i, j;

    printf("dimensions (rows, columns): ");
    scanf("%i %i", &y, &x);

    int A[y][x], B[x][y];

    printf("\noriginal matrix:\n");
    for (i = 0; i < y; i++) {
        for (j = 0; j < x; j++) {
            A[i][j] = i + 1;
            printf("%2i ", A[i][j]);
        }
        printf("\n");
    }

    transposeMatrix(x, y, A, B);

    printf("\ntransposed matrix:\n");
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) printf("%2i ", B[i][j]);
        printf("\n");
    }

    return 0;

}

void transposeMatrix(int x, int y, int A[y][x], int B[x][y]) {

    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++) B[i][j] = A[j][i];

}