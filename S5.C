#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,r,s=0;
clrscr();
printf("enter a number: ");
scanf("%d",&n);

for(i=n;i>0;)
{
r= i%10;
s= s*10+r;
i= i/10;
}
printf("\n reverse the entered number %d is %d",n,s);
getch();
}