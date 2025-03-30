#include <stdio.h>
int search(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            printf("%d",i);
            return;
        }
        
    }
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    search(arr,n,x);
    return 0;

    
}