
#include<stdio.h>
int main()
{
  int A,B,C,D,E,AB,ABC,ABCD,ABCDE;

  scanf("%d %d %d %d %d",&A,&B,&C,&D,&E);

  AB=(A+B+abs(A-B))/2;
  ABC=(AB+C+abs(AB-C))/2;
  ABCD=(ABC+D+abs(ABC-D))/2;
  ABCDE=(ABCD+E+abs(ABCD-E))/2;



  if(ABCDE==A){

          printf("NVOrder - %d$\n",ABCDE*2000);
  }
    if(ABCDE==B){
          printf("NVParaboyyy6 - %d$\n",ABCDE*2000);
  }
    if(ABCDE==C){
          printf("NRxFROZENXz - %d$\n",ABCDE*2000);
  }
    if(ABCDE==D){
          printf("NAVIMATIC666 - %d$\n",ABCDE*2000);
  }
    if(ABCDE==E){
          printf("STEDaoShi - %d$\n",ABCDE*2000);
  }



    return 0;
}
