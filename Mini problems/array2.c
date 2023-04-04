#include<stdio.h>
void main ()
{
int i, x, arr[10] = {5,7,11,20,3,6,9,15,17,21} ;
scanf ("%d",&x);
for(i=0;i<=9;i++)
{
    if (x==arr[i])
    {
        printf("found");
        break;
    }
}
    if(i==10)
        {
        printf("Not found");
        break;
        }
return 0;
}

