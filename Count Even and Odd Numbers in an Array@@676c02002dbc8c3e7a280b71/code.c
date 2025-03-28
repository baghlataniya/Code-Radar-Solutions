#include <stdio.h>
int countevenodd(int arr[],int n){
    ce=0;
    co=0;
    for(int i=0;i<=n;i++){
        if(arr[i]%2==0){
            ce++;
        }
        else{
            co++;
        }

    }
    return countevenodd;
}
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    int ans=countevenodd(arr[i]);
    printf("%d",ans);


}