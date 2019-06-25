#include<stdio.h>
int main()
{
int arr[100], n, i, small, large;

printf("enter the number of elements:");
scanf("%d",&n);

for(i=0; i<n; i++)
{
printf("enter element %d: ",i+1);
scanf("%d",&arr[i]);
}

small=arr[0];
large=arr[0];

for (i=1; i<n; i++)
{
if(arr[i]<small)
{
small=arr[i];
}
if (arr [i]>large)
{
large= arr[i];
}
}
printf("\nlargest element is : %d",large);
printf("\nsmallest elemment is : %d",small);
return(0);
}
