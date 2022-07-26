//ask the user to enter their firstName & print it back to them.
//2nd Q. also try their fullName.

#include<stdio.h>

void printString(char arr[]);

int main(){

  char str[100];
  gets(str);    //for taking input with multi-word

  //puts(str);    //for output

  printf("Your name is %s",str);// normal print

return 0;
}

void prinString(char arr[]){

   for(int i=0; arr[i] !='\0'; i++){
       printf("%c",arr[i]);

   }
   printf("\n");
}

