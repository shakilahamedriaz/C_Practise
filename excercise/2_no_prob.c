#include <stdio.h>

int main(){

  int A,B,C;
  scanf("%d %d %d",&A,&B,&C);

   int X=((A/B)*5);
   int Y=((A/C)*5);

     if(X>Y){
        printf("%d%d\n",X,Y);

     }
     else{
        Printf("%d%d\n",Y,X);

     }

    return 0;

}
