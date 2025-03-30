#include <stdio.h>
int sumdigits(int n){
    int sum=0;
    while(n>0){
       sum+=n%10;
       n=n/10;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",sumdigits(arr[i]));
    }
    
}