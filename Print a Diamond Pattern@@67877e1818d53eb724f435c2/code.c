#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n)
    for(int i=1;i<=n;i++){
        for(j=1;j<=n-i;i++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;i++){
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}
