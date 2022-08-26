#include<stdio.h>
#include<string.h>
int main()
{

   char source[]="C programming";
   char target[20];

  strcpy(target,source);   //1st tai rakhbo,then 2nd theke copy hbe

   printf("Source string =  %s\n",source);
   printf("Target string =  %s\n",target);

    return 0;
}
