void fibbonacciSeries(int n){
  int a=1;
  int b=1;
  for(int i=1;i<=n;i++){
    int temp=a;
    printf("%d",a);
    a=b;
    b=temp;
  }
}