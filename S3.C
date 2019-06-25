#include<stdio.h>
#include<conio.h>
main()
{
 int s1,s2,s3,total;
 float avg;
 clrscr();
 printf("enter marks for three subjects:");
 scanf("%d,%d,%d",&s1,&s2,&s3);
 total = s1+s2+s3;
 avg = total/3;
 printf(" total =  %d \n average = %f", total ,avg);
 getch();
  }