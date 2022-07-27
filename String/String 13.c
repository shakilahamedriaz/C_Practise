//standard Library Functions.
//<string.h>
//4.-----strcmp(firststr,secStr)
//work as-compare 2 string and return a value.
//return 0  equal mean kore .Ex: str1[]="Hello" str2[]="Hello";  then strcmp(str1,str2); use korle output : '0' that mean =
//return Positive hobe ---when firstStr>secondStr  //it depends on ASCII ...1st letter of string value.
//return Negative hobe----when firstStr<secondStr
// Ex: Ex: str1[]="Banana" str2[]="Apple";  then strcmp(str1,str2); use korle output : '+ve' that mean B > A  (ASCII rules )
#include<stdio.h>
#include<string.h>
int main(){

char firstStr[]="Apple";
char secStr[] = "Banana";



printf("%d",strcmp(firstStr,secStr));

return 0;
}
