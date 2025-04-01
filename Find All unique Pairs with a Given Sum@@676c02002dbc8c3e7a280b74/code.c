#include <stdio.h>

void pair(int arr[], int n, int k) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == k) {
                // Print the pair
                printf("%d, %d\n", arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int k;
    scanf("%d", &k);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    pair(arr, n, k);
    return 0;
}
