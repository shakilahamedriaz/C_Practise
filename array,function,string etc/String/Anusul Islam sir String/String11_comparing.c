#include<stdio.h>
#include<string.h>
int main(){

char str1[]="Shakil Ahamed";
char str2[]="Shakil Ahamed";

int d= strcmp(str1,str2);

if(d==0){
    printf("String are equal");
}else{
   printf("NOt equal");
}

return 0;
}
