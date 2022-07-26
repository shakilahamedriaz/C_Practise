#include<stdio.h>

void printString(char arr[]);

int main(){

char name[50];
scanf("%s", name);
printf("Your Name is %s", name);

return 0;
}

void prinString(char arr[]){

   for(int i=0; arr[i] !='\0'; i++){
       printf("%c",arr[i]);

   }
   printf("\n");
}
