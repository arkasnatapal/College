#include <stdio.h>
#include <math.h>

void transpose(int r, int c, int arr[r][c]) {
    int arr1[c][r];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            arr1[j][i] = arr[i][j];
        }
    }
    printf("Transposed matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) { 
            scanf("%d", &arr[i][j]);
        }
    }
    transpose(r, c, arr);
    return 0;
}
