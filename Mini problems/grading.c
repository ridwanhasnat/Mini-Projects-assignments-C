#include<stdio.h>
int main ()
{

int N ;
scanf ("%d", &N) ;
if (N >= 80)
{
printf ("Your grade is A %d", N) ;
}
else if (N >= 60)
{
printf (" Your grade is B %d", N) ;
}
else if (N >= 40)
{
printf (" Your grade is C %d", N) ;
}
else if (N >= 0)
{
    printf ("You are a failure in life F %d", N) ;
}
return 0 ;
}
