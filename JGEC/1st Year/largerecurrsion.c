#include <stdio.h>

// Recursive function to find max
int findMax(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }

    int max = findMax(arr, n - 1);

    if (arr[n - 1] > max)
        return arr[n - 1];
    else
        return max;
}

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = findMax(arr, n);
    printf("Largest element is: %d\n", largest);

    return 0;
}
