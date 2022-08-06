//check a number is prime or not.
//divisor of the x number.



#include<stdio.h>
int main()
{

    int n,i,count;
    printf("Enter a integer number : ");


    scanf("%d",&n);

    count = 0;

    if(n == 1 || n == 0){
        count = 1;
    }

        for(i=2; i<=n/2; i++)
        {

            if(n%i==0)
            {

                count++;
                break;
            }
        }
        if(count==0)
        {

            printf("%d is a prime number\n\n",n);
        }
        else
        {
            printf("%d is not a prime number\n\n",n);
        }

    printf("Divisor of the %d number are: \n",n);
    for(i=1; i<=n; i++){

        if(n%i==0)
        {

            printf(" %d",i);
        }
    }


    return 0;
}
