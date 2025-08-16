// matrix_ops.c
// EN: Add and multiply two 2x2 matrices.
// SI: 2x2 මැට්‍රික්ස් දෙකක් එකතු කර ගුණ කිරීම.
// TA: 2x2 கோஷ்டிகளை கூட்டி பெருக்குதல்.

#include <stdio.h>

void print2(const int m[2][2]) { printf("[%d %d]\n[%d %d]\n", m[0][0],m[0][1], m[1][0],m[1][1]); }

int main(void) {
    int A[2][2] = {{1,2},{3,4}};
    int B[2][2] = {{5,6},{7,8}};
    int C[2][2] = {{0,0},{0,0}};

    // add
    for (int i=0;i<2;i++) for (int j=0;j<2;j++) C[i][j] = A[i][j] + B[i][j];
    printf("A+B=\n"); print2(C);

    // multiply
    int M[2][2] = {{0,0},{0,0}};
    for (int i=0;i<2;i++) for (int j=0;j<2;j++) for (int k=0;k<2;k++) M[i][j] += A[i][k]*B[k][j];
    printf("A*B=\n"); print2(M);
    return 0;
}
