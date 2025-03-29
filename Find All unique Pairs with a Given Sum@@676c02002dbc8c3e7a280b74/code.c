#include <stdio.h>
void sum(int arr[],int n,int target){
   for(int i=1;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==target){
            printf("%d %d",arr[i],arr[j]);
        }
    }
   }
   }
  
   

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<n-1;i++){
        scanf("%d",arr[i]);
    }
    int target;
    scanf("%d",&target);
    sum(arr,n,target);

}