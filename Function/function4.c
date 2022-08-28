#include<stdio.h>

float squireArea(float side);
float circleArea(float rad);
float retArea(float a, float b);


int main(){
  float a=5.0;
  float b=10.0;
  float side=5.5;
  
  printf("Area is: %f",retArea(a,b));


return 0;
}

float squireArea((float side){
    return side*side;
}
float circleArea(float rad){
    return 3.1416*rad*rad;
}
float retArea(float a, float b){
    return a*b;
}