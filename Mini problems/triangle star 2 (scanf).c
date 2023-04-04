#include<stdio.h>
void main ()
{
int i,j,x ;
scanf ("%d", &x);
for ( i=0;i<x;i++)
{
for (j=0;j<=i;j++)
{
printf (" * ");
}
printf ("\n");
}
}
