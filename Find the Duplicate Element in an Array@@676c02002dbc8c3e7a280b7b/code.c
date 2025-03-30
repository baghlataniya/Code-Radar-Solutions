#include <stdio.h>
void duplicates(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;i<n;i++){
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
                
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    duplicates(arr,n);
    return 0;
}
