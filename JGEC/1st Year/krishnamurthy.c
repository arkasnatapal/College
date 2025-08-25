//krishnamurthy number 
#include <stdio.h>

int fact(int n) {
    int p = 1;
    for (int i = 1; i <= n; i++) {  
        p *= i;
    }
    return p;
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    int temp, s = 0;
    for (temp = n; temp > 0; temp /= 10) {
        int ld = temp % 10;
        s += fact(ld);
    }

    if (s == n) {
        printf("KN");  
    } else {
        printf("NKN"); 
    }

    return 0;
}
