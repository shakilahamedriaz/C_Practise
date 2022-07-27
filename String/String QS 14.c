//Take a string input from the user using %c.
//generally we taek input %s,gets, fgets etc way te.now we have to take input character by character.

#include<stdio.h>
#include<string.h>
int main(){

char str[1000];
char ch;
int i=0;

while(ch != '\n'){
    scanf("%c",&ch);
    str[i]=ch;
    i++;
}
str [i]= '\0';
puts(str);

}

