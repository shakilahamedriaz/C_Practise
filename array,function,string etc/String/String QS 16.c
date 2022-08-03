//Write a function named slice, which takes a string & returns a sliced from index n to m.
//ex: akta string suppose "helloworld" here total index 012..89.
//we take n to m index that mean 3 to 6. then is looks like "low" from 'helloworld"
#include<stdio.h>
#include<string.h>

void slice(char str[], int n, int m);

int main(){
    char str[]="HelloWorld";
    slice(str, 3,6);


}
void slice(char str[], int n, int m){ //n&m are valid values
    char newStr[100];
    int j;
    for(int i=n; i<=m; i++,j++){
        newStr[j]=str[i];
    }
   newStr[j]= '\0';
   puts(newStr);

}
