#include <stdio.h>
 void calc(int a,int b,char operator){
     
    switch(operator){
      case '+':
     int sum=a+b;
    printf("Sum is %d",sum);
     break;
     case '-':
     int sub=a-b;
    printf("Substraction is %d",sub);
    break;
     case '*': 
     int multi=a*b;
    printf("Multiplication is %d",multi);
    break;
     case '/': 
     int Division=a/b;
    printf("Division is %d",Division);
    break;
    default:
    printf("Thanks for using Muhammad's Umar calculator!");
    break;
  }
  return;
  }
int main() {
   int a,b;
   printf("Enter two numbers!\n");
   scanf("%d\n%d",&a,&b);
   char operator;
   printf("Enter arithmetic operator to perform calculation!\n");
   scanf(" %c",&operator);
   calc(a,b,operator);
    return 0;
}