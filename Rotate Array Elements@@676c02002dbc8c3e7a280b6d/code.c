#include <stdio.h>

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int N, K;
    scanf("%d", &N); // Read size of array
    int arr[N];

    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &K); // Read number of rotations
    K = K % N; // Handle cases where K > N

    // Reverse the entire array
    reverse(arr, 0, N - 1);
    // Reverse first K elements
    reverse(arr, 0, K - 1);
    // Reverse remaining elements
    reverse(arr, K, N - 1);

    // Print rotated array
    for (int i = 0; i < N; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}




