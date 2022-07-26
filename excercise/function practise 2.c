#include <stdio.h>

 void salam();
 void namaste();


 int main(){
       printf("Enter b for Bangladesh & i for Indian : \n");
      char ch;
      scanf("%c",&ch);

     if(ch == 'b'){
      salam();
      }
      else{
      namaste();
      }

      return 0;
      }

      void salam(){
      printf("Assalamu Alaikum sir\n");
      }

     void namaste(){
     printf("Namaste sir \n");
     }
