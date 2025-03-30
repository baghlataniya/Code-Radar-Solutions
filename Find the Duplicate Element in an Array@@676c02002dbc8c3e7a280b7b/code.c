#include <stdio.h>
void duplicate(int arr[],int n){
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag=true;

            }
        }
         if(flag==false){
            printf("%d",arr[i]);
            break;
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
