#include <stdio.h>
int main(){
    int n;
    scanf("%d",n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            return 1;
        }
        else{
            return 0;
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");

    }
    return 0;
}
