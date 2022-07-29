//Percentage of three subject
#include<stdio.h>
int calcPercentage(int science, int math, int islamsikkha);

int main(){

int sc =98;
int math =95;
int islamsikkha =99;

printf("Percentage is : %d",calcPercentage(sc, math, islamsikkha));

return 0;
}

int calcPercentage(int science, int math, int islamsikkha){

    return((science + math + islamsikkha)/3);

}
