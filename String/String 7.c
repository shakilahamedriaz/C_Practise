
//ask the user to enter their firstName & print it back to them.
//2nd Q. also try their fullName.

#include<stdio.h>

void printString(char arr[]);

int main(){

  char str[100];
  fgets(str, 100, stdin);  //   string,size,stdin(standerd input)

  puts(str);    //for output

return 0;

}

void prinString(char arr[]){

   for(int i=0; arr[i] !='\0'; i++){
       printf("%c",arr[i]);

   }
   printf("\n");
}

