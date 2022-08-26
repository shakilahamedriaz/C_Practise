//strupr and strlwr function use kore string convert kokra hoy.

#include<stdio.h>
#include<string.h>
int main()
{

    char string[30];
    printf("Enter string : ");
    gets(string);

    strupr(string);

    printf("UPper case string is : %s",string);

    return 0;
}
