#include <stdio.h>

int main(){
    char op;
    int a,b;
    scanf("%d %d %c",&a,&b,&c);
    if('+'){
        printf("%d\n",a+b);
    }
    else if('-'){
        printf("%d\n",a-b);
    }
    else if('*'){
        printf("%d\n",a*b);
    }
    else if('/'){
        if(b!=0){
             printf("%d\n",a/b);
        }
        else{
            printf("does not");
        }
    }
    else{
        printf("error");
    }
    
        
    
    return 0;
}