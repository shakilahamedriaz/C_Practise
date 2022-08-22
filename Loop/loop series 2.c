#include<stdio.h>
int main(){

     printf("Enter the value of n :\n");
     int n,sum;

     scanf("%d",&n);
     sum=(n*(n+1)*(2*n+1))/6;

printf("sum of the series is : %d\n",sum);
return 0;
}

