#include <stdio.h>
#include <string.h>
int main ()
{
    char str [100], char ch, int i, count=0 ;
    gets(str);
    gets ("ch");
    for (i=0;i<'\0';i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
        printf ("%d",count);
    }
    return 0;
}
