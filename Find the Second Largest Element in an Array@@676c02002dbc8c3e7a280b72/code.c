#include <stdio.h>
#include <limits.h>

int secmax(int arr[], int n) {
    int max = INT_MIN;
    int secmax = INT_MIN;  // Fix: Correct variable name

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            secmax = max;  // Store previous max as second max
            max = arr[i];  // Update max
        } 
        else if (arr[i] > secmax && arr[i] != max) {  
            secmax = arr[i];  // Update second max correctly
        }
    }
    return secmax;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int x = secmax(arr, n);
    printf("%d", x);

    return 0;
}
