#include <limits.h>
#include <stdio.h>
void findminMax(int arr[],int n,int minmax[]){
    int max=arr[0];
    int min=arr[1];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
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
    int minmax[2];
    findminMax(arr,n,minmax);
   printf("%d %d",minmax[0],minmax[1]);
    
   

}