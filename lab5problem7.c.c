#include<stdio.h>
int main(){
int num1,num2;
printf("Enter 1st and 2nd number\n");
scanf("%d%d",&num1,&num2);
num1=num1^num2;
num2=num1^num2;
num1=num1^num2;
printf("After Swapping:\n");
printf("%d is 1st number\n",num1);
printf("%d is 2nd number",num2);
return 0;
}
