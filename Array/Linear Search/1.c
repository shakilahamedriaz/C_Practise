#include<stdio.h>

int LinearSearch(int array[],int n, int x)
{
    for(int i=0; i<n; i++)
    {
        if(array[i]==x)
        {
           printf("Array position is : ");
            return i;
            break;
        }
    }

    printf("Not found\n");
}

int main()
{
    int n;
    printf("Enter the size of an array : ");
    scanf("%d",&n);

    int i,array[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    int x;
    scanf("%d",&x);

    printf("%d",LinearSearch(array,n,x));
    return 0;

}
