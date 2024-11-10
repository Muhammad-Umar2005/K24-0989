#include<stdio.h>

void swap(int a,int b){
int c;
c= a;
a= b;
b= c;
printf("%d,%d",a,b);
return;
}
int main(){
	int a,b;
	printf("Enter two numbers!\n");
	scanf("%d\n%d",&a,&b);
swap(a,b);
return 0;
}
