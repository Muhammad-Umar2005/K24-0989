#include<stdio.h>
int main()
{
int num,count=0;
printf("Enter any number!\n");
scanf("%d",&num);
while(num>0){
if(num%2==0){
count=count;
num=num>>1;
}else 
count=count+1;
num=num>>1;
}
count++;
printf("%d is the number of ones in this number",count);
return 0;
}
