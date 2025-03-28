#include <stdio.h>
int main(){
    int n;
    char m='A';
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char n=m;
        for(int j=1;j<=i;j++){
            printf("%c",m);
            n++;
        }
    }
    return 0;
}