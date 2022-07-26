#include<stdio.h>

int sum(int a, int b);
void printTabel(int n);

int main(){
    int n;
    printf("Enter number :");
    scanf("%d",&n);

    printTable(n); //argumrnt/actual parametr

    return 0;
}
int sum(int x,int y){
return x+y;
}
void printTable(int n){ //parameter/formal parameter
    for(int i=1; i<=10; i++){
        printf("%d\n",i*n);
    }
}