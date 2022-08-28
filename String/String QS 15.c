// Salting.  --pass secure(called salting)
// salting is some character that is added users pass
// Q.  Find the salted form of a password entered by user if the salt is"123" & added at the end.

#include <stdio.h>
#include <string.h>
void salting(char password[]);

int main()
{

    char password[100];
    scanf("%s", password);
    salting(password);

}

void salting(char password[])
{
    char salt[] = "123";
    char newPass[200];

    strcpy(newPass, password); // newpass -inside user pass/ store done.
    strcat(newPass, salt);     // newpass= test+ "123";

    puts(newPass);
}
