#include<stdio.h>
int main ()
{

int Age ;
ch M, U, male, female ;
scanf ("%d%C%C%C%C", &Age, &M, &U, &male, &female) ;
if (M== 'M')
{
printf ("License insured") ;
}
else if (male== 'male' && Age > 30  )
{
    printf ("License insured") ;
}
else if (female== 'female' && Age > 25)
{
    printf ("License insured") ;
}
else
{
    printf ("Not Insured") ;
}
return 0 ;
}
