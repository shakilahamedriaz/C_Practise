#include <stdio.h>

void printString(char arr[]);

int main()
{

    char *canChange = "Hello World";
    puts(canChange);
    canChange = "Hello";
    puts(canChange);


   // char canChange[] = "Hello World";
    //puts(canChange);
    //canChange = "Hello";  //hobe na cz only ptr can allow this.
    //puts(canChange);


    return 0;
}

void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {

        printf("%c", arr[i]);
    }
    printf("\n");
}
