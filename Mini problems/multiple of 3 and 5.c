#include<stdio.h>
int main ()
{

int N ;
scanf ("%d", &N) ;
if (N%3==0 && N%5==0)
printf (" It is a multiple of both 3 and 5, %d", N) ;
return 0 ;
}
