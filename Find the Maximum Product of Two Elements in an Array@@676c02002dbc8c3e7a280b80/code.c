
#include <stdio.h>
#include <limits.h>
int maxproduct(int arr[],int n){
    int maxp=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int product=arr[i]*arr[j];
            if(product>maxp){
                maxp=product;
            }
        }
    }
    return maxp;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x=maxproduct(arr,n);
    printf("%d",x);
}
