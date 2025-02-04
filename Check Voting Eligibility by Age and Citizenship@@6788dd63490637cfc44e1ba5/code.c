#include <stdio.h>



int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    if((n>=18) && (m==1)){
        printf("Eligible\n");
        
    }
    else if((n>=18)&&(m==0)){
        printf("Not Eligible");
    }
    else{
        printf("Not Eligible");
    }
}