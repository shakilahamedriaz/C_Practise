
#include<stdio.h>
int main(){

int A[3][3],i,j,row,column,upperSum=0,LowerSum=0;

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
//sum of upper Triangle elements :



for(i=0; i<3; i++){
    for(j=0; j<3; j++){

        if(i<j){

            upperSum= upperSum + A[i][j];
        }
        if(i>j){

            LowerSum=LowerSum+A[i][j];
        }
    }
}

printf("Sum of Upper Triangle elementS : %d\n",upperSum);
printf("Sum of lower Triangle elements : %d\n",LowerSum);




return 0;
}
