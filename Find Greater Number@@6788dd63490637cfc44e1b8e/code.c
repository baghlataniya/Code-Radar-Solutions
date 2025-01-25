#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {

    int n,m;
    scanf("%d %d",&n,&m);
    if(n>m){
        printf("%d\n",n)
    }
    else{
        printf("%d\n",m)
    }

}