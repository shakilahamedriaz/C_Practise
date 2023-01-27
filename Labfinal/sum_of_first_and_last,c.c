#include<stdio.h>
int main()
{

    int n,sum=0,first,last;
    printf("Enter a 6 digit number : ");
    scanf("%d",&n);

    last=n%10;
  //  first=n;

    while(n>=10)
    {

        n=n/10;
    }
    first=n;
    sum=first+last;

    printf("Sum of first ans last digit : %d",sum);

    return 0;
}
