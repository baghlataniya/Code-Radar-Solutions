#include <stdio.h>

int main(){
    char op;
    int a ,b;
    scanf("%d %d",&a, &b);

    switch(op){
        case '+':
        printf("%d\n",a+b);
        break;

        case'-':
        printf("%d\n",a-b);
        break;

        case '*':
        printf("%d\n",a*b);
        
        case '/':
        printf("%d\n",a/b);

        default:
        printf("invaild op");
        break;
    }


    return 0;
}