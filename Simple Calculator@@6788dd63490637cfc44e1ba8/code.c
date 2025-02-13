#include <stdio.h>

int main(){
    char op;
    int a ,b;
    scanf(" %c %d %d",&a, &b,&op);
   

    switch(op){
        case '+':
        printf("%d\n",a+b);
        break;

        case'-':
        printf("%d\n",a-b);
        break;

        case '*':
        printf("%d\n",a*b);
        break;
        
        case '/':
        printf("%d\n",a/b);
        break;

        default:
        printf("invaild op");
        break;
    }


    return 0;
}