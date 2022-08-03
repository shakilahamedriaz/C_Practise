//check if a given character is present in a string or not.
//it mean that a string is taken by user and a char aslo input by user .Q. is the char is abailabe the sting?
#include<stdio.h>
#include<string.h>

void checkChar(char str[],char ch);

int main(){

  char str[]= "Shakil";
  char ch='h';
  checkChar(str,ch);

}

void checkChar(char str[],char ch){

  for(int i=0; str[i] != '\0'; i++){

    if(str[i] == ch){
        printf("Character is Present !\n");
        return;
    }
  }

 printf("Character is NOt Present !\n");
}
