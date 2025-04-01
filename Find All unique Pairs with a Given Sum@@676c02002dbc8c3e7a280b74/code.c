#include <stdio.h>
void sum(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                printf("%d %d",arr[i],arr[j]);
                break;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int k;
    scanf("%d",&k)
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sum(arr,n,k);

    
}