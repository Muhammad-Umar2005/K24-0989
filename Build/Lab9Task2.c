#include<stdio.h>

void checker(int n){
	if(n%2==0)
	printf("Even!\n");
	else printf("Odd!\n");
	return;
}
int main(){
	int n;
	printf("Enter any number greater than 0!\n");
	scanf("%d",&n);
	checker(n);
	return 0;
}
