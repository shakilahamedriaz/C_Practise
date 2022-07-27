//standard Library Function
//<string.h>
// strcpy(newStr,oldStr)
//work as- copies value of old string to new string
#include<stdio.h>
#include<string.h>
int main(){

char oldStr[] = "oldStr";
char newStr[] = "newStr";

strcpy(newStr, oldStr);

puts(newStr);

return 0;
}
