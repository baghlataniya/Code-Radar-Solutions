#include <stdio.h>
int fibo(int n){
    if(n==2|| n==1) return 1;
    int ans1=fibo(n-1);
    int ans2=fibo(n-2);
    int ans=ans1+ans2;
    return ans;
}
int main(){
    int n;
    scanf("%d",n);
    int f=fibo(n);
    printf("%d\n",n);
    
}