#include <stdio.h>
#include <string.h>
int main ()
{
char s1[]= "Bangladesh";
char s2[]= "Afghanistan";
int len1, len2;

len1= length (s1);
len2= length (s2);

printf("string is:%s length is:%d\n", s1,len1);
printf("string is:%s length is:%d", s2,len2);
}
length (char *s)
{
int length = 0 ;
while ( *s != '\0' )
{
length++ ;
s++ ;
}
return ( length ) ;
}
