#include <stdio.h>
void countEvenodd(int arr[],int n,int result[]){
    result[0]=0;
    result[1]=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0) result[0]++;
        else result[1]++;
    }


}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int result[2];
    countEvenodd(arr,n,result);
    printf("%d %d",result[0],result[1]);
    return 0;
}