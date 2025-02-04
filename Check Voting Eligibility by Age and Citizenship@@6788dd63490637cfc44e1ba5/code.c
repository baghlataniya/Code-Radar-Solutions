#include <stdio.h>



int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    if(n>=18){
        printf("Eligible");
        if(m==1){
            printf("citizen");
        }
        else{
            printf("non-citizen");
        }
    }
    else{
        printf("Not Eligible");
    }
    
}