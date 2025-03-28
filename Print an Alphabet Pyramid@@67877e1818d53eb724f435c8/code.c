#include <stdio.h>
int main(){
    int n;
    char m='A';
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char n=m;
        for(int j=1;j<=i;j++){
            printf("%c ",n);
            n++;
        }
        printf("\n");
    }
    return 0;
}
