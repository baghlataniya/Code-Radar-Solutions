void factorialRange(int start,int end){
    if(start==0||end==0){
        printf("1");
    }
    if(start<0){
        printf("Invaild range");
    }
    for(int i=start;i<=end;i++){
        int fact=1;
        for(int j=1;j<=i;j++){
            fact*=j;
        }
        printf("%d\n",fact);
    }

}
