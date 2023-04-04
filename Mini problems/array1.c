#include<stdio.h>
void main ()
{
int i, sum=0, age [10] = {2,4,6,8,10,12,14,16,18,20} ;
for (i=0;i<=9;i++)
{
    sum = sum + age[i] ;
}
printf ("total sum of age is %d",sum);
return 0;
}
