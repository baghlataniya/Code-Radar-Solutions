#include <stdio.h>

int findSmallestMissing(int arr[], int n) {
    int num = 1; // Start from the smallest positive integer

    while (1) { // Infinite loop to find the missing number
        int found = 0; // Flag to check if num is present in array
        
        for (int i = 0; i < n; i++) {
            if (arr[i] == num) { // If number found in array
                found = 1;
                break;
            }
        }

        if (!found) return num; // If not found, return the missing number
        num++; // Check next number
    }
}

int main() {
    int n;
    
    // Taking input for array size
    
    scanf("%d", &n);

    int arr[n];

    // Taking input for array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Finding the smallest missing positive number
    int missing = findSmallestMissing(arr, n);
    
    // Output result
    printf("%d\n", missing);
    
    return 0;
}

