#include<stdio.h>
int main(){

int n;
printf("Enter a positive number :");
scanf("%d",&n);

if(n%2==0){
     printf("%d is EVEN Number\n",n);

     if(n%4==0){
        printf("Divisible by 4\n");

     }else {
         printf("Not divisible by 4\n");

     }

     if(n%6==0){
        printf("Divisible by 6\n");
     }else{
        printf("Not divisible by 6\n");
     }

}else{
   printf("%d is ODD Number\n",n);
    if(n%3==0){
        printf("Divisible by 3\n");

     }else {
         printf("Not divisible by 3\n");

     }

     if(n%5==0){
        printf("Divisible by 5\n");
     }else{
        printf("Not divisible by 5\n");
     }

}




return 0;
}
