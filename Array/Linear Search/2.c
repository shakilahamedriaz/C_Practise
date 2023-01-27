//print the location of the Position :
//else ---print not found;
//sequential search one by one..Linear search.
#include<stdio.h>
int main(){

int n;
printf("Enter the size of array : ");
scanf("%d",&n);

int array[n],i;
printf("Enter the elements of array : ");
for(i=0; i<n; i++){

    scanf("%d",&array[i]);
}
int value;
printf("Enter the element you want to search : ");
scanf("%d",&value);

int pos=-1;
for(int i=0; i<n; i++){

    if(array[i]==value){

        pos=i+1;
        break;
    }
}
if(pos==-1)
{

    printf("Position is nor found\n");
}else{

  printf("The value is found at %d  position",pos);
}



return 0;
}
