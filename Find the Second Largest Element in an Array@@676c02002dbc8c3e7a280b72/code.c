#include <stdio.h>
#include <limits.h>
int secmax(int arr[],int n){
    int max=INT_MIN;
    int secma=INT_MIN;
    for(int i=0;i<n;i++){
      if(max<arr[i]){
        secmax=max;
        max=arr[i];
      }
    }
    return secmax;
    
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x=secmax(arr,n);
    printf("%d",x);

}








