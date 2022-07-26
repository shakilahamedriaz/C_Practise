#include<stdio.h>
void calculatePrice(float value);

int main(){
    float value=100.0;
    calculatePrice(value);
    printf("value is : %.3f",value);
    return 0;
}

void calculatePrice(float value){
    value= value +(0.18*value);
    printf("price of final value is :%.2f \n",value);

}