#include<stdio.h>
#include<string.h>
main()
{
char strl[10], str2[10];
printf("enter the string");
scanf("%s",&str2);
strcpy(strl,str2);
strrev (str2);
if(strcmp(strl,str2)==0)
printf("\n It is a palindrome");
else
printf("\n it is not a palindrome");
}
