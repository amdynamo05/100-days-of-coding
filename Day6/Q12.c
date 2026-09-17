#include<stdio.h>
int main()
{
int n;
printf("Enter an integer: ");
scanf("%d",&n);
if(n>=0)
{
if(n==0)
printf("Number is Zero");
else
printf("Number is Positive");
}
else
printf("Number is Negative");
return 0;
}