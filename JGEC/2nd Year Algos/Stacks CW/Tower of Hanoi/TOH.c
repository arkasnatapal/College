#include <stdio.h>
#include <math.h>

void towerOfHanoi(int n, char beg, char aux, char end) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", beg, end);
        return;
    }
    towerOfHanoi(n - 1, beg, end, aux);  
    printf("Move disk %d from %c to %c\n", n, beg, end);
    towerOfHanoi(n - 1, aux, beg, end);  
}

int main() {
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);
    printf("\nSteps to solve Tower of Hanoi:\n");
    towerOfHanoi(n, 'A', 'B', 'C');  
    printf("Total moves = %.0f\n", pow(2, n) - 1);
    return 0;
}
