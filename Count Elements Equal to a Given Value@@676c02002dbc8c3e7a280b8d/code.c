#include <stdio.h>

int count(int arr[], int n, int k) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {  // ✅ Fix: Checking if the element is equal to K
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = count(arr, n, k);
    printf("%d\n", result);

    return 0;
}


