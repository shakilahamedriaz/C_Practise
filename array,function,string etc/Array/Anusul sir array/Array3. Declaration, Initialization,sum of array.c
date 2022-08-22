// Array : collection of variable..
// data_type array_name[array_size];

#include<stdio.h>
int main(){

int num[5];
int i,sum=0;
for(i=0; i<=4; i++){
    scanf("%d",&num[i]);

    sum=sum+num[i];  //sum+=num[i];
}
printf("%d",sum);



return 0;
}
