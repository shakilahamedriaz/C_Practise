#include<stdio.h>
#include<string.h>
int main(){

 char str1[15]="Bangladesh";
 char str2[15]="India";
 char temp[15];
 printf("-----Before Swapping : \n");

 printf("str1= %s\n",str1);
 printf("str2= %s\n",str2);



 strcpy(temp,str1);  //str1 now in temp and empty is str1.
 strcpy(str1,str2);  //now str2 empty
 strcpy(str2,temp);  //store temp=str1 in str2

 printf("\-----nAfter swapping : \n");

 printf("str1= %s\n",str1);
 printf("str2= %s\n",str2);


return 0;
}
