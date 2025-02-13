#include <stdio.h>
int main(){
    int month;
    scanf("%d",&month);
    if(month==1|| month==3||month==5||month==7||month==8||month==10||month==12){

    
        printf("%days\n 31");
    }
    else if(month==2){
        printf("%days\n 28");
    }
    else{
        printf("%days\n 30");
    }
    

    return 0;
}