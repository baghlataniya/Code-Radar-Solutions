#include <stdio.h>

int findFirstPeak(int arr[], int N) {
    // Edge case: If only one element, it's a peak
    if (N == 1) return arr[0];

    // Check first element
    if (arr[0] > arr[1]) return arr[0];

    // Check middle elements
    for (int i = 1; i < N - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i];
        }
    }

    // Check last element
    if (arr[N - 1] > arr[N - 2]) return arr[N - 1];

    // If no peak found
    return -1;
}

int main() {
    int N;
    
    // Read size of the array
    scanf("%d", &N);
    int arr[N];

    // Read array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the first peak element
    printf("%d\n", findFirstPeak(arr, N));

    return 0;
}
