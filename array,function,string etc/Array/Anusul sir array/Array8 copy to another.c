//Copy all elements of an array to another array.
#include<stdio.h>
int main()
{

    int array1[100],array2[100],i,n;

    printf("How many numbers : ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {   printf("\nEnter the %d element : ",i);
        scanf("%d",&array1[i]);
    }

    printf("\nArray1 : ");
    for(i=0; i<n; i++)
    {

        printf("%d ",array1[i]);

    }
//copy all the elements from array1
    for(i=0; i<n; i++)
    {

        array2[i]=array1[i];
    }
    printf("\nArray2 : ");
    for(i=0; i<n; i++)
    {

        printf("%d ",array2[i]);
    }


    return 0;
}
