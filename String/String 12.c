//standard Library Functions.
//<string.h>
//3-------strcat(firstStr, secStr)
//concatenates first string with second string.
//mane 2 ta string k ek sathe add kore nibe without space
// ex : str1[]="sha"; , str2[]= "kil";  then strcat(str1,str2)
//output: shakil
//1st string er modde 2nd ta store hoy.
// so 1st string er capacity(storage) boro rakhte hbe 2 ta store korar jonne.
#include<stdio.h>
#include<string.h>

int main()
{


    char firstStr[100]= "ILove";
    char secStr[]  ="You";

    strcat(firstStr,secStr);

    puts(firstStr);

    return 0;
}
