#include <stdio.h>

void findMinMax(int arr[], int n, int minMax[]) {
    minMax[0] = arr[0]; // Initialize min
    minMax[1] = arr[0]; // Initialize max

    for (int i = 1; i < n; i++) {
        if (arr[i] < minMax[0]) {
            minMax[0] = arr[i]; // Update min
        }
        if (arr[i] > minMax[1]) {
            minMax[1] = arr[i]; // Update max
        }
    }
}

int main() {
    int n;
    scanf("%d", &n); // Read the array size
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }

    // int minMax[2]; // Array to store min and max
    findMinMax(arr, n, minMax); // Find min and max

    printf("%d %d\n", minMax[0], minMax[1]); // Print min and max
    return 0;
}
