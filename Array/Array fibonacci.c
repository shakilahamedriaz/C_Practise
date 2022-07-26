#include<stdio.h>
int main(){


int n;
printf("Enter nth(n>2)  fibonacci num series : \n");
scanf("%d",&n);

int fib[n];
fib[0]=0;
fib[1]=1;

printf("%d  %d",fib[0],fib[1]);
for(int i=2; i<n; i++){

    fib[i]=fib[i-1]+fib[i-2];// important

    printf(" %d ",fib[i]);
}





return 0;

}
