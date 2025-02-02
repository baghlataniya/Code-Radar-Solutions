#include <stdio.h>



int main() {

    int n,m;
    scanf("%d %d",&n,&m);
    if(n%m==0){
        printf("Yes");
    }
    else{
        printf("NO");
    }
    return 0;
}