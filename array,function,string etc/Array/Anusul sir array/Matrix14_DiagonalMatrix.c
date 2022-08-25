//Diagonal elements sum :
/* example   1 2 3
             4 5 6
             7 8 9

  here diagonal matrix sum is = 1+5+9 =16;
  lets do it with coding.
  */
#include<stdio.h>
int main(){

int A[3][3],i,j,row,column,sum=0;

printf("Enter the number of row : ");
scanf("%d",&row);
printf("Enter the number of column : ");
scanf("%d",&column);

//getting the elements for the matrix :
printf("\n");

for(i=0; i<row; i++){
    for(j=0; j<column; j++){

        printf("A[%d][%d]=  ",i,j);

        scanf("%d",&A[i][j]);
    }
    printf("\n");
}



printf("A = ");
for(i=0; i<row; i++){
        printf("\t");
    for(j=0; j<column; j++){

        printf("%d ",A[i][j]);

    }
    printf("\n");
}

//sum of Diagonal elements :
printf("Diagonal Elements are : ");
for(i=0; i<3; i++){
    for(j=0; j<3; j++){

        if(i==j){
            printf("%d ",A[i][j]);
            sum=sum + A[i][j];
        }
    }
}
printf("\n");
printf("\nSum of diagonal elements : %d\n",sum);

return 0;
}

