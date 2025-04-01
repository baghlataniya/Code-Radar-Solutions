#include <stdio.h>

int findFirstRepeating(int arr[], int n) {
    // Traverse the array using two loops
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // Check if the current element is equal to any of the elements that come after it
            if (arr[i] == arr[j]) {
                return arr[i];  // Return the first repeating element
            }
        }
    }
    return -1;  // Return -1 if no repeating element is found
}

int main() {
    int n;
    scanf("%d", &n);  // Input the number of elements in the array
    
    int arr[n];
    
    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Call function to find the first repeating element
    int result = findFirstRepeating(arr, n);
    printf("%d",result);
    return 0;
}
