#include <stdio.h>
int main ()
{
char str1 [100]= "Rahat";
char str2 [100]= "Rafat";
int i=0;
while (str1[i]!='\0')
{
    if (str1[i] == str2 [i])
    {
        i++;
    }
    printf ("Same");
    if (str1[i] != str2[i])
    {
        printf ("Not same");
        break;
    }
}
return 0;
}
