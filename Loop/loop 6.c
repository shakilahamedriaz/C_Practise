//counts how many 2 divides 100.
#include<stdio.h>
int main(){

int x=100;
int cnt=0;
while(x%2==0){
    x=x/2;
    cnt++;


printf("%d\n",cnt);
}

return 0;
}
