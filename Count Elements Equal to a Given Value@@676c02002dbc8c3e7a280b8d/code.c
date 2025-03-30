#include <stdio.h>
int count(int arr[],int n,int k){
    int cnt=0;
    for(int i=0;i<n;i++){
       for(int j=i+1;i<n;j++){
        if(arr[i]+arr[j]==k){

            cnt++;
        }
       }
    }
    return cnt;
}
int main() {
    int n;
    scanf("%d", &n);
    int k;
    scanf("%d",&k);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result =count(arr, n,k);
    printf("%d\n", result);

    return 0;
}

