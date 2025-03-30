#include <stdio.h>
void duplicates(int arr[],int n){
    for(int i=0;i<n;i++){
        int isPrinted=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                isPrinted=1;

            }
        }
         if(isPrinted==1){
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
