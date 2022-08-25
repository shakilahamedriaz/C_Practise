
//A matrix column = B matrix row
//  Then multiplication is possbl;
//  sum=sum+first[i][k]*second[k][j];
//  result[i][j]=sum;
//  sum=0;
#include<stdio.h>
int main()
{

    int first[10][10],second[10][10],result[10][10],r1,r2,c1,c2,i,j,k,sum=0;
    printf("Enter rows of First Matrix : ");
    scanf("%d",&r1);
    printf("Enter column fo First Matrix : ");
    scanf("%d",&c1);

    printf("\n");

    printf("Enter rows of Second Matrix : ");
    scanf("%d",&r2);
    printf("Enter column fo Second Matrix : ");
    scanf("%d",&c2);

    while(c1 != r2)
    {
        printf("\nError !! Enter the vlid matrix to multiplication \n\n lets take input Again");
        printf("Enter rows of First Matrix : ");
        scanf("%d",&r1);
        printf("Enter column fo First Matrix : ");
        scanf("%d",&c1);

        printf("\n");

        printf("Enter rows of Second Matrix : ");
        scanf("%d",&r2);
        printf("Enter column fo Second Matrix : ");
        scanf("%d",&c2);


    }

//taking input for first matrix :
    printf("\n");
    printf("For A Matrix : \n\n");
    for(i=0; i<r1; i++)
    {

        for(j=0; j<c1; j++)
        {

            printf("A[%d][%d]= ",i,j);
            scanf("%d",&first[i][j]);
        }
        printf("\n");
    }


//taking input for second matrix :

    printf("\n");
    printf("For B Matrix : \n\n");
    for(i=0; i<r2; i++)
    {

        for(j=0; j<c2; j++)
        {
            printf("B[%d][%d]=  ",i,j);
            scanf("%d",&second[i][j]);
        }
        printf("\n");
    }

//For Multiplication Operation:

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {

            for(k=0; k<c1; k++)
            {

                sum=sum+first[i][k]*second[k][j];

            }
            result[i][j]=sum;
            sum=0;
        }
    }

//printing first matrix :
    printf("First matrix: \n");

    for(i=0; i<r1; i++)
    {

        printf("\t");
        for(j=0; j<c1; j++)
        {

            printf("%d ",first[i][j]);
        }
        printf("\n");
    }


//print second matrix:
    printf("Second matrix: \n");
    for(i=0; i<r2; i++)
    {

        printf("\t");
        for(j=0; j<c2; j++)
        {

            printf("%d ",second[i][j]);
        }
        printf("\n");
    }


//result of matrix :

    printf("Result matrix: \n");
    for(i=0; i<r1; i++)
    {

        printf("\t");
        for(j=0; j<c2; j++)
        {

            printf("%d ",result[i][j]);
        }
        printf("\n");
    }



    return 0;
}


