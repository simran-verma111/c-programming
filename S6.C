#include<stdio.h>

main()
{
int number,sum=0, r,temp;
printf("enter an integer");
scanf("%d",&number);
 for (temp=number;number!=0;number=number/10)
 {
 r=number %10;
 sum=sum+(r*r*r);
 }
 if(sum==temp)
printf("%d is an armstrong number: \n",temp);
else
printf("%d is not an armstrong number: \n",temp);
return(0);

}
