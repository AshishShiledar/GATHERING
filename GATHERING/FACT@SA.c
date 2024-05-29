#include<stdio.h>
#include<conio.h>
int fact(int a);
int fact (int a)
{
if (a==0)
{
return 0;	
}
else if (a==1)
{
return 1;	
}
else
{
return a*fact(a-1);	
}
}
int main()
{
int f;
f=fact(9);
printf ("factorial %d",f);
getch();	
}