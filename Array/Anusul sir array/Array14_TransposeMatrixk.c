#include<stdio.h>
int main(){

int A[10][10],transpose[10][10],i,j,row,column;

printf("Enter the number of row : ");
scanf("%d",&row);
printf("Enter the number of column : ");
scanf("%d",&column);

//getting the elements for the matrix :

for(i=0; i<row; i++){
    for(j=0; j<column; j++){

        printf("A[%d][%d]=  ",i,j);

        scanf("%d",&A[i][j]);
    }
    printf("\n");
}
//Transpose operation for matrix :
for(i=0; i<row; i++){
    for(j=0; j<column; j++){

        transpose[j][i]=A[i][j];
    }
}




//printing the matrix :
printf("A = ");
for(i=0; i<row; i++){
        printf("\t");
    for(j=0; j<column; j++){

        printf("%d ",A[i][j]);

    }
    printf("\n");
}


//print Transpose matrix :

printf("\n Transpose matrix  :\n\n");

for(i=0; i<column; i++){
        printf("\t");

    for(j=0; j<row; j++){


        printf("%d ",transpose[i][j]);
    }
    printf("\n");
}


return 0;
}
