//print first and last name by user input using loop.

#include<stdio.h>
void prinString(char arr[]);


int main(){

 char firstName[]="Shakil";
 char lastName[]="Riaz";

 prinString(firstName);
 prinString(lastName);

return 0;
}

void prinString(char arr[]){

   for(int i=0; arr[i] != '\0'; i++ ){
    printf("%c",arr[i]);
   }
   printf("\n");

}


