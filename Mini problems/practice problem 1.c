#include<stdio.h>
void multiprint(int n,char ch)
{
    int i, j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
          printf("%c",ch);
        }
        printf("\n");
    }

}
void main()
{
    multiprint(6,'*');
}
