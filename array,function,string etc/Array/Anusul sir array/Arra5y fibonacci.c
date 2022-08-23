//Fibonacci series using array...
//0 1 1 2 3 5 8 13
//first=0
//second=1
//fib =first+second
//first=second;
//second=fibo

#include<stdio.h>
int main(){

int n,a[30];
printf("Enter the number of terms : ");
scanf("%d",&n);

  a[0]=0;
  a[1]=1;

  for(int i=2; i<n; i++){

    a[i]=a[i-1]+a[i-2];  //formula a[2]=1+0
                          //= 1;
  }
  //print answer..
  for(int i=0; i<n; i++){

    printf("%d ",a[i]);
  }

return 0;
}
