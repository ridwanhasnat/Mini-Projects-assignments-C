#include <stdio.h>
#include <string.h>
int main ()
{
    char str[100];
    char ch;
    int i,count=0;
    gets(str);
    scanf ("%c",&ch);
     for (i=0;i<100;i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
    }
    printf ("%d",count);
    return 0;
}
