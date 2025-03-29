void fibonacciSeries(int n){
  int a=0;
  int b=1;
  for(int i=1;i<=n;i++){
    int temp=a+b;
    printf("%d ",a);
    a=b;
    b=temp;
  }

}