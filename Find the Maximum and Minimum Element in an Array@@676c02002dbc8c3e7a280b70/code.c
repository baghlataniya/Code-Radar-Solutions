#include <limits.h>
#include <stdio.h>
void findminMax(int arr[],int n,int minmax){
    int max=INT_MIN;
    int min=INT_MIN;
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
    for(int i=0;i<n;i++){
        printf("%d %d",minmax[0],minmax[1]);
    }
   

}