void factorialRange(int start,int end){
    if(start<0){
        printf("Invalid range");
    }
    if(start==0){
        printf("1");
    }
    int fact;
    for(int i=start;i<end;i++){
        fact*=i;
         printf("%d",i);
    }
   

}

