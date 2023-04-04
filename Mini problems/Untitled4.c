#include <stdio.h>
void capitals (int ch)
{
    if (ch==1)
    printf("Capital: Washinton DC");
    else if (ch==2)
    printf ("capital: Canberra");
    else if (ch==3)
    printf ("Capital is New delhi");
}
int main ()
{
    int choice;
    printf ("Provide an input\n");
    printf ("Enter 1 for USA \n");
    printf ("Enter 2 for Australia \n");
    printf ("Enter 3 for India \n");
    scanf ("%d", &choice);
    capitals (choice); //what happens is, the value in choice is moved into ch. ch is a temporary memory/parametre. choice is the main parametre.
    return 0;
}





