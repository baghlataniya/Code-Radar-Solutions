#include <stdio.h>
int isSorted(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return 0;
        }
    
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x=isSorted(arr,n);
    if(x){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}