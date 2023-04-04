void main ()
{
int low, high, fr=1, i;
scanf ("%d%d", &low, &high);
for (;low<=high;low++)
{
for (i=1,fr=1;i<=low;i++)
{
fr = fr*i;
}
printf ("Factorial of %d is %d\n",low, fr);
}
return 0 ;
}
