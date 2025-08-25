#include<stdio.h>
#include<math.h>
int main() {
    int n;
    printf("Enter the num: ");
    scanf("%d", &n);
    int m = n, p = n, c = 0, s = 0;
    for (; p != 0; p /= 10) {
        c++;
    }
    for (; m != 0; m /= 10) {
        int ld = m % 10;
        s = s + (int)(round(pow(ld, c))); 
    }
    if (s == n) {
        printf("Armstrong");
    } else {
        printf("Not Armstrong");
    }
    return 0;
}
