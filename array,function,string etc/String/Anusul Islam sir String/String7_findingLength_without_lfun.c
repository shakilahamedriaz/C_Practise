#include<stdio.h>
int main(){

char a[]="Isrt Jahan Sinthiya";

int i=0,len=0;
while(a[i]!='\0'){

    i++;
    len++;
}

printf("Length = %d\n",len);

return 0;
}
