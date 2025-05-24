#include <stdio.h>
#include <math.h>

void btd(int n) {
    int d = 0, b = 1;
    while (n > 0) {
        int ld = n % 10;
        d += ld * b;
        b *= 2;
        n /= 10;
    }
    printf("Decimal = %d\n", d);
}

void dtb(int n) {
    int bi = 0, b = 1;
    while (n > 0) {
        int rem = n % 2;
        bi += rem * b;
        b *= 10;
        n /= 2;
    }
    printf("Binary = %d\n", bi);
}

int main() {
    int choice, n;
    printf("Enter your choice \n1. Binary to Decimal \n2. Decimal to Binary\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a binary number: ");
            scanf("%d", &n);
            btd(n);
            break;
        case 2:
            printf("Enter a decimal number: ");
            scanf("%d", &n);
            dtb(n);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
