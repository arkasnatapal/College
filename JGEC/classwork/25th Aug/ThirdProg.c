//3. wap to take N number of elements in an array then sort the 1st half of the array in the ascending order using bubble sort and the other half in descending order using selection sort technique
#include <stdio.h>
void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void selectionSortDesc(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int maxIdx = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] > arr[maxIdx]) {
                maxIdx = j;
            }
        }
        int temp = arr[maxIdx];
        arr[maxIdx] = arr[i];
        arr[i] = temp;
    }
}
int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int mid = n / 2;

    bubbleSort(arr, mid);  
    selectionSortDesc(arr + mid, n - mid);  

    printf("Sorted array:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}