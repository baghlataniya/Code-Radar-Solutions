#include <stdio.h>

int main() {
    int num ,isPrime=1;
    scanf("%d",&num);
    if(num<2){
        isPrime=0;
    }
    else{
        for(int i=2;i*i<n;i++){
            if(num%i==0){
                isPrime=0;
            }
        }
    }
    if(isPrime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }

    return 0;
}