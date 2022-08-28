#include<stdio.h>
#include<string.h>

int main()
{

    char str[100],ch;
    int i,vowel,consonant,digit,word,other;
    printf("Enter a String : ");
    gets(str);

    i=vowel=consonant=digit=other=0;

    while((ch=str[i])!='\0')
    {

        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'|| ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){

            vowel++;
        }

        else if((ch>='a' || ch<='z') || (ch>='A' || ch<='Z')){
            consonant++;
        }
        else if(ch>='0' && ch<='9'){

            digit++;
        }
        else if(ch==' '){
            word++;
        }
        else{
            other++;
        }
            i++;
    }
      word++;

      printf("\n\n");

      printf("Number of vowel = %d\n",vowel);
      printf("Number of consonant = %d\n",consonant);
      printf("Number of digit = %d\n",digit);
      printf("Number of word = %d\n",word);
      printf("Number of others = %d\n",other);


        return 0;
    }
