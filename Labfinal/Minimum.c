#include<stdio.h>
int main(){

int a[]={12,13,30,17,70};
int i,j,temp;

printf("Numbers are stored in array : \n");
for(i=0; i<5; i++){

    printf("%d\n",a[i]);
}

for(i=0; i<5; i++){
    for(j=i+1; j<5; j++){

        if(a[i]>a[j]){


            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
printf("\nMinimum number of array : \n\n");

    printf("%d\n",a[0]);



return 0;

}


