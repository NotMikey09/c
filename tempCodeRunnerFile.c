#include <stdio.h>

int main() {
    float a[10][10] = {0};
    char name[10][20];
    int n, r, c;

    printf("Enter the no. of students: ");
    scanf("%d", &n);

    for (r = 0; r < n; r++) {
        printf("Enter the %d studentid,Name,Marks of 6 subjects: ", r + 1);
        scanf("%f %s", &a[r][0], name[r]);

        for (c = 1; c <= 6; c++) {
            scanf("%f", &a[r][c]);
            a[r][7] += a[r][c];
            if (a[r][c] < 35) {
                a[r][9] = -1;
            }
        }

        a[r][8] = a[r][7] / 6.0;

        printf("Id\tName\tTotal\tAvg\tGrade\n");
        printf("-------------------------------------------------------------------------------\n");

        printf("%.0f\t%s\t%.0f\t%.2f\t", a[r][0], name[r], a[r][7], a[r][8]);

        if (a[r][9] == -1) {
            printf("Failed\n");
        } else if (a[r][8] >= 75) {
            printf("Distinction\n");
        } else if (a[r][8] >= 60) {
            printf("First Class\n");
        } else if (a[r][8] >= 50) {
            printf("2nd Class\n");
        } else {
            printf("3rd Class\n");
        }
    }

    return 0;
}