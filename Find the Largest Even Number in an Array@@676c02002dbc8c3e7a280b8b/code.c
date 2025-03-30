#include <stdio.h>
int largestevennumber(int arr[],int n){
    int largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0&& largest<arr[i]){
            largest=arr[i];
            
        }
    }
    return (largest==INT_MIN?-1:largest);
}
int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result =largestevennumber(arr, n);
    printf("%d\n", result);

    return 0;
}