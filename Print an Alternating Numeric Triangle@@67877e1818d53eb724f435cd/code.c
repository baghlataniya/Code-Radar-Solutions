#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
   
    for(int i=1;i<=n;i++){
        int a=1;
        if(i%2!=0) a=1;
        else a=0;
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            if(a==0) a=1;
            else a=0;

        }
        printf("\n");
}
    return 0;
}