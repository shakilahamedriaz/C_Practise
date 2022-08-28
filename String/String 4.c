//ask the user to enter their firstName & print it back to them.
//2nd Q. also try their fullName.

#include<stdio.h>

void printString(char arr[]);

int main(){

char firstname[50];
scanf("%s", firstname);
printf("Your Name is %s", firstname);

return 0;
}

void prinString(char arr[]){

   for(int i=0; arr[i] !='\0'; i++){
       printf("%c",arr[i]);

   }
   printf("\n");
}
