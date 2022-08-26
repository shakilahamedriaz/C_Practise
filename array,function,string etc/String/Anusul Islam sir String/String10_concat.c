//string concat without library function
#include<stdio.h>
#include<string.h>
int main(){

char str1[50]="My name is ";
char str2[]="Shakil Riaz";

int i=0,len=0,j=0;  //here len is count variable.
while(str1[i]!='\0'){

    i++;
    len++;
}

while(str2[j]!='\0');

{
    str1[len+j]=str2[j];

    j++;

}

printf("Final string = %s",str1);


return 0;
}
