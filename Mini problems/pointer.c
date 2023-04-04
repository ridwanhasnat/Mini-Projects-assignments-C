#include<stdio.h>
int swap(int *x,int *y)
{
    int t;
     t=*x;
    *x=*y;
    *y=t;
}
int main()
{
   int x=10,y=20;
   swap(&x,&y);
   printf("x=%d\n y=%d",x,y);
}
