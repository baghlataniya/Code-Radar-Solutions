#include <stdio.h>

int isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0; // Not sorted
        }
    }
    return 1; // Sorted
}

int main() {
    int N;
    scanf("%d", &N);  // Read the number of elements

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);  // Read the array elements
    }

    if (isSorted(arr, N))
        printf("Sorted\n");
    else
        printf("Not Sorted\n");

    return 0;
}
