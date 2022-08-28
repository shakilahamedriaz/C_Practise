#include<stdio.h>
int main()
{

    int a[10],i,id;
    for(i=0; i<10; i++)
    a[i]=0;

    for(i=0; i<100; i++)
    {
        scanf("%d",id);
        a[id-1]++;
    }
//initializing max score...

    int max_score=0;
    for(i=0; i<10; i++)


        if(max_score<a[i])

            max_score=a[i];



    printf("winners are : \n");
    for(i=0; i<10; i++)

        if(max_score==a[i])
        {

            printf("%d",id);
        }

    return 0;
}
