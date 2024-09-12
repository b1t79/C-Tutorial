#include <stdio.h> 
void main() 
{ 
int d,h,m,s; 
printf("Enter number of seconds : "); 
scanf("%d",&s); 
if(s<60) 
{ 
printf("Time = %d seconds.",s); 
} 
if(s>=60 && s<3600) 
{ 
m = s/60; 
s = s%60; 
printf("Time = %d minutes %d seconds.",m,s); 
} 
if(s>=3600 && s<86400) 
{ 
h=s/3600; 
m=(s%3600)/60; 
s=((s%3600)%60); 
printf("Time = %d hours %d minutes %d seconds.",h,m,s); } 
if(s>=86400) 
{ 
d=s/86400; 
h=(s%86400)/3600;
m=((s%86400)%3600)/60; 
s=((s%86400)%3600)%60; 
printf("Time = %d days %d hours %d minutes %d seconds.",d,h,m,s); 
} 
}