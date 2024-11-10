#include<stdio.h>

int product(int a,int b){
	int c;
	c=a*b;
	return c;
	}
int main(){
	int a,b;
	printf("Enter any two numberts!\n");
	scanf("%d\n%d",&a,&b);
 int result=product(a,b);
 printf("%d",result);
 return 0;
}
