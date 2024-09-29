#include<stdio.h>
int main(){
int age;
int citizenship;
printf("Are you citizenship of Pakistan:(1 for yes or 0 for no)\n");
scanf("%d",&citizenship);
printf("Enter your age\n");
scanf ("%d",&age);
if (age>=18 && citizenship==1){
printf("\nEligible for vote");}
else
 {
 printf("\nNot eligible for vote");
 }
 return 0;
}
