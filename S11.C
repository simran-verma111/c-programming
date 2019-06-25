#include<stdio.h>
#include<string.h>
#define SIZE 20
struct bookdetail
{
char name[20];
char author[20];
int pages;
float price;
};
void output(struct bookdetail v[], int n);
void main()
{
struct bookdetail b[SIZE];
int num, i;
printf("enter the number of books:");
scanf("%d",&num);
printf("\n");
for(i=0;i<num;i++)
{
printf("\t=:book %d detail:=\n",i+1);

 printf("\n enter the book name:\n");
 scanf("%d",b[i].name);
 printf("enter the author of book\n");
 scanf("%d",b[i].author);
 printf("enter the pages of the book\n");
 scanf("%d",b[i].pages);
 printf("enter the price of the book\n");
 scanf("%d",b[i].price);
 }
 output(b,num);
 }
 void output(struct bookdetail v[], int n )
 {
 int i,t=1;
 for(i=0;i<n,i++;t++)
 {

 printf("\n");
 printf("book no.%d\n",t);
 printf("\t\t book %d name is= %s \n",t,v[i].name);
 printf("\t\t book %d author is= %s \n",t, v[i].author);
 printf("\t\t book %d pages is= %d \n",t, v[i].pages);
 printf("\t\t book %d price is= %f \n",t, v[i].price);

 printf("\n");
 }

 }#i