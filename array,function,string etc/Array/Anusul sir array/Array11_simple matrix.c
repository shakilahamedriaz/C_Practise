//taking input in array by

#include<stdio.h>
int main()
{
    //For A matrix :
    printf("FOR A MATRIX\n");
    int i,j,A[50][50],row,column;
    printf("Enter the number of row :");
    scanf("%d",&row);
    printf("Enter the number of column :");
    scanf("%d",&column);


    for(i=0; i<row; i++)
    {

        for(j=0; j<column; j++)
        {
            printf(" A[%d][%d]:",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n"); //for new line before next row
    }

    printf("A = ");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<column; j++)
        {

            printf("%d ",A[i][j]);
        }

        printf("\n");
    }

   //For B Matrix
    printf("FOR B MATRIX\n");
    int B[50][50];
    printf("number of row :");
    scanf("%d",&row);
    printf("number of column :");
    scanf("%d",&column);


    for(i=0; i<row; i++)
    {

        for(j=0; j<column; j++)
        {
            printf(" B[%d][%d]:",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n"); //for new line before next row
    }

    printf("B = ");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<column; j++)
        {

            printf("%d ",B[i][j]);
        }

        printf("\n");
    }




    return 0;
}
