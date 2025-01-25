#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int h,p,b;
    scanf("%d %d %d",&h,&b,&p);
    if(b*b+p*p==h*h){
        printf("Valid")
    }
    else{
        printf("Invalid")
    }
}