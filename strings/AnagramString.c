#include<stdio.h>

int main() {
    char a[100], b[100];
    int c1 = 0, c2 = 0, d1 = 0, d2 = 0;

    printf("Enter first string: ");
    scanf("%s", a);

    printf("Enter second string: ");
    scanf("%s", b);

    // Count the length of each string
    for (int i = 0; a[i] != '\0'; i++) {
        c1++;
    }

    for (int i = 0; b[i] != '\0'; i++) {
        c2++;
    }

    // Check if the lengths are equal
    if (c1 == c2) {
        // Check if each character in a appears in b
        for (int j = 0; a[j] != '\0'; j++) {
            for (int i = 0; b[i] != '\0'; i++) {
                if (a[j] == b[i]) {
                    d1++;
                    break;
                }
            }
        }

        // Check if each character in b appears in a
        for (int j = 0; b[j] != '\0'; j++) {
            for (int i = 0; a[i] != '\0'; i++) {
                if (a[i] == b[j]) {
                    d2++;
                    break;
                }
            }
        }

        // Check if the counts match
        if (d1 == c1 && d2 == c2) {
            printf("The strings are anagrams.\n");
        } else {
            printf("The strings are not anagrams.\n");
        }
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}