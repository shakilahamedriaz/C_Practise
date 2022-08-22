#include<stdio.h>
int main(){

    printf("Enter the value of n :\n");
    int n,sum=0;
   scanf("%d",&n);
for(int i=1; i<=n; i++){

    sum+=i;

}

printf("sum of the series is : %d\n",sum);
return 0;
}
