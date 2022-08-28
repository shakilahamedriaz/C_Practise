//madam --->reverse (madam) same so this is palindrome
//without library function :

#include<stdio.h>
#include<string.h>
int main()
{

    char str1[30];
    char str2[30];
    printf("Enter a string : \n");
    gets(str1);


    int i=0,len=0,j;

    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1; i>=0; i--, j++)
    {

        str2[j] = str1[i];

    }

    str2[j]='\0';

    printf("str1= %s\n",str1);
    printf("str2= %s\n",str2);

//check palindrome or not
    int d=strcmp(str1,str2);
    printf("\n");

//printf("%d",d);  if d=0 that mean str1 = str2; that mean palindrome string..
    if(d==0)
    {
        printf("String is Palindrome\n");
    }
    else
    {
        printf("String is not Palindrome\n");
    }
    return 0;
}
