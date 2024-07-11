// transpose matrix function

#include <stdio.h>

int main(void) {

    void transposeMatrix(int A[4][5], int B[5][4]);

    int A[4][5] = {
        {1, 1, 1, 1, 1},
        {2, 2, 2, 2, 2},
        {3, 3, 3, 3, 3},
        {4, 4, 4, 4, 4}
    }, B[5][4], i, j;

    printf("original matrix:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) printf("%i ", A[i][j]);
        printf("\n");
    }

    transposeMatrix(A, B);

    printf("\ntransposed matrix:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) printf("%i ", B[i][j]);
        printf("\n");
    }

    return 0;

}

void transposeMatrix(int A[4][5], int B[5][4]) {

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 4; j++) B[i][j] = A[j][i];

}