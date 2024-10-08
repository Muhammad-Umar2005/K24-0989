#include<stdio.h>
int main()
{
int n;
printf("Enter any number");
scanf("%d",&n);
while(n>0)
{
if (n==2 || n==3 || n==5 || n==7)
	printf ("%d is a prime number",n);
else if (n%2==0 || n%3==0 || n%5==0 || n%7==0 )
	printf("%d is a composite number",n);
else
 printf ("%d is a prime number",n);
n=0;
}
return 0;
}
