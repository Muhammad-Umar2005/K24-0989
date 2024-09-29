#include<stdio.h>
int main(){
int num;
printf("Enter any Number");
scanf("%d",&num);
if (num<1){
if (num<0){
printf ("Negative!");
}
else {
printf ("Zero!");}
}
else if (num>0 && num%2==0)
{printf("Positive and even");
}
 else if(num>0 && num%2!=0)
{printf("Positive and Odd");
} else 
{printf("Please Input Any Integer");}
return 0;
}

