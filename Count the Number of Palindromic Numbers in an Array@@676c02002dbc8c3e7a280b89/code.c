#include <stdio.h>
int count(int arr[],int n){
    int cnt=0;
    for(int i=0;i<n/2;i++){
        if(arr[i]==arr[n-i-1]){
            cnt++;
        }
    }
    return cnt;

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x=count(arr,n);
    printf("%d",x);
}