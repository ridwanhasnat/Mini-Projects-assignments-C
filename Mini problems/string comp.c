#include <stdio.h>
int main ()
{
char str1 [100]= "Rahat";
char str2 [100]= "Rafat";
int i;
for (i=0;i<100;i++)
{
    if (str1[i] == str2 [i])
    {
        printf ("Same");
    }
    else
    {
        break;
    }
}
return 0;
}
