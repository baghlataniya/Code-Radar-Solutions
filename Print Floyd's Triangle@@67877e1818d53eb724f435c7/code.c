#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int num=1;
        for(int j=1;j<=i;j++){
            num++;
            printf("%d",num);
          
            
        }
        printf("\n");
    }
    return 0;
}
