#include<stdio.h>
int main()
{
int n=2,a;
printf ("Enter the value:\n");
scanf ("%d",&a);
while(a!=0)
{
n=n+a;
printf("Again enter the value of a:\n");
scanf ("%d",&a);
}
printf("%d is sum of variable and user's input until the user enters 0",n);
return 0;
}
