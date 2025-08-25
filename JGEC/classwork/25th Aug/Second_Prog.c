// Linear Search in an array where values are taking using dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>
void linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            printf("Element found at index: %d\n", i);
            return;
        }
    }
    printf("Element not found.\n");
}
int main() {
    int n, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    linearSearch(arr, n, key);

    free(arr);
    return 0;
}