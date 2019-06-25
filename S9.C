#include<stdio.h>

int main()
{
int i,number;
long factorial = 1;
printf("\n please enter any number to find factorial\n");
scanf("%d",&number);
for(i=1; i<= number; i++)
{
factorial= factorial*i;
}
printf("\n factorial of %d= %d\n", number,factorial);
return(0);
}