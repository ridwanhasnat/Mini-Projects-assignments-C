#include<stdio.h>
int fun( int x )
{
int div , countOne = 0 ;
    while( x !=0 )
    {
        div = x % 2 ;
        x = x / 2 ;
printf("%d",div);
        if( div == 1 )
        {
countOne ++ ;
        }
    }
    return countOne ;
}
int main()
{
int x =13;

printf("\nCount is %d \n\n ", fun(x));
 return 0 ;
}
