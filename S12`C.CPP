 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int choice;
 float temp, ans;
 printf("enter the temperature:\n");
 scanf("%f",&temp);
 printf("enter and select your choice\n");
 printf("1. fahrenheit to celsius\n");
 printf("2. celsius to fahrenheit\n");
 printf("enter your choice");
 scanf("%d",&choice);
switch(choice)
{
case 1: ans=(temp-32)/9;
printf("the temp in celsius is %f",ans);
case 2: ans=(temp*9)+32,
printf("the temp in fahrenheit is %f", ans);
default: printf("wrong choice");
break;
}
getch();
}
