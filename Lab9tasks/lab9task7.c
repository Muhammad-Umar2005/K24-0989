#include<stdio.h>

int prime(int n){
	int temp=n;
if (n==2 || n==3 || n==5 || n==7)
printf("%d is a prime number",n);
else if (n%2!=0 && n%3!=0 && n%5!=0 && n%7!=0)
printf ("%d is a prime number",n);
else printf("%d is not a prime number",temp);
}
int main(){
	int n;
printf("Enter any Number!");
scanf("%d",&n);
prime(n);
return 0;
}
