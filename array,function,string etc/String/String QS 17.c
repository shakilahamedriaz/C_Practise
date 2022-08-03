//write a function to count the occurrence of vowels in a strng.
//Helloworld---any vowlws then count++;

#include<stdio.h>
#include<string.h>

int countVowel(char str[]);

int main(){
char str[]="Shakil";
printf("volwels are : %d\n\n",countVowel(str));


}
int countVowel(char str[]){

   int count =0;
   for(int i=0; str[i] != '\0'; i++){
     if(str[i]== 'a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        count ++;



   }

  return count;
}
