#include <stdio.h>

int main() {
    int sp,cp;
    scanf("%d %d",&sp,&cp);
    if(sp>cp){
        printf("Loss\n");
    }
    else if(cp>sp){
        printf("Profit\n");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}