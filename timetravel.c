#include <stdio.h>
void main ()
{
int d,h,m,s;
printf("Enter number of seconds : ");
scanf("%d",&s);
d=s/86400;
h=(s%86400)/3600;
m=((s%86400)%3600)/60;
s=((s%86400)%3600)%60;
printf("Time = %d days %d hours %d minutes %d seconds.",d,h,m,s);
}