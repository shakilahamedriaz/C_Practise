#include <stdio.h>
int main()

{
    //array in C
    /*500 marks
    500 seperate variable*/
    //syntex
    //data_type array name[array size];
    int marks[5];   //array declaration
    //initialize
    marks[0]=80;      //ek liner moddheo initialize kora jay
    marks[1]=70;         // int marks[5]={80,70,60,50,40};
    marks[2]=60;        //general index-  1 ,2 ,3, 4, 5
    marks[3]=50;        //Programming index start with 0 then 1 then 2,3,4...
    marks[4]=40;
//print the first element of the array
    printf("The First Element is : %d",marks[4]+marks[3]);
return 0;


}