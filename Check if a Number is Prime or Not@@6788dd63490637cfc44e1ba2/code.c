#include <stdio.h>

int main() {
    int num ,i,isPrime=1;
    scanf("%d",&num);
    if(num<=2){
        isPrime=0;
    }
    
    else{
        for(i=2;i<num;i++){
            if(num%i==0){
                isPrime=1;
                break;
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