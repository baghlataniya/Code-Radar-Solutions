#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float h,p,b;
    scanf("%f %f %f",&h,&b,&p);
    if(b*b+p*p==h*h){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}