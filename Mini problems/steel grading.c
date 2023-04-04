#include<stdio.h>
int main ()
{

int H, T ;
float C ;
scanf ("%d%f%d", &H, &C, &T) ;
if (H > 50 && C < 0.7 && T > 5600)
{
printf ("It is Grade 10 steel") ;
}
else if (H > 50 && C < 0.7 )
{
    printf ("It is Grade 9 steel") ;
}
else if (C < 0.7 && T > 5600)
{
    printf ("It is Grade 8 steel") ;
}
else if (H > 50 && T > 5600)
{
    printf ("It is Grade 7 steel") ;
}
else if (H > 50 || C < 0.7 || T > 5600)
{
    printf ("It is Grade 6 steel") ;
}
else
{
    printf ("It is Grade 5 steel") ;
}
return 0 ;
}
