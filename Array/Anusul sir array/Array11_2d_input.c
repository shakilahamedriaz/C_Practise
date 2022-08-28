//taking input in array by

#include<stdio.h>
int main()
{

    int i,j,A[50][50],row,column;
    printf("Enter the number of row :");
    scanf("%d",&row);
    printf("Enter the number of column :");
    scanf("%d",&column);


    for(i=0; i<row; i++)
    {

        for(j=0; j<column; j++)
        {
            printf("Element of A[%d][%d]:",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n"); //for new line before next row
    }

    printf("The output of the 2d or matrix array is below : \n\n");
    for(i=0; i<row; i++)
    {

        for(j=0; j<column; j++)
        {

            printf("%d ",A[i][j]);
        }

        printf("\n");
    }


    return 0;
}
