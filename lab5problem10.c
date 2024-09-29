#include<stdio.h>
int main()
{
int num,sum,digit;
sum=0;
printf("Enter any Number");
scanf("%d",&num);
while (num>0){
digit=num%10;
sum+=digit;
num=num/10;
}
printf("%d is a sum of digits of a number",sum);
}