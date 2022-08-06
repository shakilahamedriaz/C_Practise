#include<stdio.h>
int main(){

int t,n,count=0,count1=0;;
scanf("%d",&t);

for(int i=0; i<t; i++){

    scanf("%d",&n);

    if(n>0){

        count++;
    }
    if(n<0){
        count1++;
    }
}
printf("%d %d\n",count,count1);



return 0;
}
