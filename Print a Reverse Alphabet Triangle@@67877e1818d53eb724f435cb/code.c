#include <stdio.h>
int main(){
    int n;
    char m='A'
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        char ch=m;
        for(int j=1;j<=i;j++){
            printf("%c",ch);
            ch++;
        }
    }
}