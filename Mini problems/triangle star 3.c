#include<stdio.h>
void main ()
{
int i,j, k ;
scanf ("%d", &k);
for (i=k;i>=0;i--)
{
for (j=0;j<=i;j++)
{
printf (" * ");
}
printf ("\n");
}
}
