#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int resultGCD = gcd(a, b);
    int resultLCM = lcm(a, b);
    printf("GCD of %d and %d is: %d\n", a, b, resultGCD);
    printf("LCM of %d and %d is: %d\n", a, b, resultLCM);
    return 0;
}
