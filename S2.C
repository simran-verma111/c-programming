#include<stdio.h>
#include<conio.h>
main()
{

float celsius, fahrenheit;
printf("enter the temperature in celsius=");
scanf("%f",&celsius);
fahrenheit=celsius*9/5+32;
printf("convert into fahrenheit=%f",fahrenheit);
return(0);
}