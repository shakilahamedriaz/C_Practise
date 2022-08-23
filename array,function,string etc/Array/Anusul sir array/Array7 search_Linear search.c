/* The searching algorithm searches for the specified element in the given list.
  *Binary search and Linear search are the commonly used searching algorithm.

  **Linear Search.(Generallay for small array)
  **Binary Search.(for large array)

  **The linear search is the algorithm of choice for short lists,because it's simple and requires minimal code to implement.

  **Binary search is a popular algorithm for large database with records ordered by numerical key.



 int num[]={10,2,30,15,28,5};
 int value=15;(find the element)

 a) Is the item found?
 b) of Yes then what's the position?
 */
#include<stdio.h>
int main(){

int a[]={10,2,30,15,28,5};
int value,i,position=-1;
printf("Enter the value that you want to serach :");
scanf("%d",&value);

for(i=0; i<6; i++){

    if(value==a[i]){
            position=i+1;
            break;
    }
}
if(position==-1){
    printf("Item is not found");
}
else{
    printf("\nThe value is found at %d position\n",position);
    printf("\nAnd the value is %d\n",a[position-1]);
}

return 0;
}
