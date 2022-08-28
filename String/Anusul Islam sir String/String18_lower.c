#include<stdio.h>
#include<string.h>
int main()
{

    char string[30];
    printf("Enter string : ");
    gets(string);

    strlwr(string);

    printf("UPper case string is : %s",string);

    return 0;
}
