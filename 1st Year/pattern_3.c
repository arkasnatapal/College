#include <stdio.h>

int main() {
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print numbers with a space
        for (int k = 1; k <= i; k++) {
            printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
}
