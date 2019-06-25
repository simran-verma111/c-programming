#include<stdio.h>

int main()
{
int number, i=1;
printf("enter the number");
scanf("%d",&number);
printf("multiplication table of %d:\n",number);
printf("------------------------\n");
while(i<=10)
{
printf("%d * %d = %d\n", number,i,number*i);
i++;
}
return(0);
}