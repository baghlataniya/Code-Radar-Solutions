#include <stdio.h>
int main{
    char a,b,c;
    scanf("%c %c %c",&a,&b,&c);
    if(a=='R'){
        printf("Stop");
    }
    else if(b=='G'){
        printf("Go");
    }
    else if(c=='Y'){
        printf("Slow Down");
    }
    else{
        printf("Invaild");
    }





    return 0;
}