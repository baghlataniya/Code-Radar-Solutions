#include <stdio.h>
int reverse(int arr[],int n,int k){
    while(n<k){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return reverse
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    if(k>n){
        k=k%n;
    }
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}