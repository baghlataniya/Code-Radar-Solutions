#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {

    int n;
    scanf("%d",&n);
    if(n%4==0){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }

    
    return 0;
}