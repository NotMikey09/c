#include <stdio.h>

int main() {
    int a[10][10], b[10][10], result[10][10], nr, nc, r, c, k, s;

    printf("Enter the number of rows and columns of matrix A:\n");
    scanf("%d %d", &nr, &nc);

    printf("Enter the %d numbers of A Array:\n", nr * nc);
    for (r = 0; r < nr; r++) {
        for (c = 0; c < nc; c++) {
            scanf("%d", &a[r][c]);
        }
    }

    printf("Enter the %d numbers of B Array:\n", nr * nc);
    for (r = 0; r < nr; r++) {
        for (c = 0; c < nc; c++) {
            scanf("%d", &b[r][c]);
        }
    }

    printf("Elements Are:\n");
    printf("------------------------------------------------------\n");

    for (r = 0; r < nr; r++) {
        for (c = 0; c < nc; c++) {
            s = 0;
            for (k = 0; k < nc; k++) {
                s += a[r][k] * b[k][c];
            }
            result[r][c] = s;
            printf("%4d", result[r][c]);
        }
        printf("\n");
    }

    return 0;
}