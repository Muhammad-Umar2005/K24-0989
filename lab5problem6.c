#include<stdio.h>
int main()
{

int number;
printf("Enter any number");
scanf("%d",&number);

(number>0)?printf("Number is positive"):((number<0)?printf("Number is negative"):printf("Number is zero"));

return 0;
}
