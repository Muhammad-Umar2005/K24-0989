#include<stdio.h>
int main()
{
int age,income,credit_score;
printf("Enter the age,income,credit_score!\n");

scanf("%d%d%d",&age,&income,&credit_score);

if (age>=18 && income>=100000 && credit_score>=400){
printf("You are eligible for loan!");
}
else {
printf("You are not eligible for loan!");
}
return 0;
}
