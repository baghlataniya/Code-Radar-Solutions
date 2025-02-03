#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    if(num<2){
        printf("Not Prime");
    }
    else{
        for(int i=2;i*i<n;i++){
            if(num%i==0){
                printf("Prime");
            }
        }
    }

    return 0;
}