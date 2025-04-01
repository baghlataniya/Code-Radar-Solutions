#include <stdio.h>
int pair(int arr[],int n,int k){
    int totalpairs=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                 printf("%d %d\n", arr[i], arr[j]);

               totalpairs++;
               
            }
        }
    }
    return totalpairs;
}

int main(){
    int n;
    scanf("%d",&n);
    int k;
    scanf("%d",&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    pair(arr,n,k);
    return 0;

    
}