#include <stdio.h>
int isPrime(int n){
    int t=0
    if(n<1){
        return 0;
    }
    else{
        for(int i=1;i*i<n;i++){
            if(i%n==0){
                return 0;
            }

        }
    }
    return 1;

}

int count(int arr[n],int n){
    int cnt=0
    for(int i=0;i<n;i++){
        for(int i=0;i<n;i++){
            if(isPrime(arr[i])){
                cnt++;
            }
        }
        return cnt;
    }
    int main(){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int x=count(arr,n);
        printf("%d",x);
        return 0;
    }















}