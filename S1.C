 #include<stdio.h>
 void main()
 {
 char name[30];
 int age[50];
 int phonenumber[12];
 printf("enter yourname\t");
 scanf("%s",&name);
 printf("enter yourage\t");
 scanf("%d",&age);
 printf("enter yourphonenumber\t");
 scanf("%d",&phonenumber);
 printf("%s,%d,%d",&name,&age,&phonenumber);
 getch();
 }