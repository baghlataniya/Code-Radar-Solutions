#include <stdio.h>
int main(){
    int month;
    scanf("%d",&month);
    if(month==1|| month==3||month==5||month==7||month==8||month==10||month==12){

    
        printf("%d\n 31");
    }
    else if(month==2){
        printf("%d\n 28");
    }
    else{
        printf("%d\n 30");
    }
    

    return 0;
}