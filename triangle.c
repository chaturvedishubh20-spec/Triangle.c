#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Right-angled triangle (filled)
    printf("\nRight-angled triangle (filled):\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Right-angled triangle (hollow)
    printf("\nRight-angled triangle (hollow):\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    // Equilateral triangle (filled)
    printf("\nEquilateral triangle (filled):\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Equilateral triangle (hollow)
    printf("\nEquilateral triangle (hollow):\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}