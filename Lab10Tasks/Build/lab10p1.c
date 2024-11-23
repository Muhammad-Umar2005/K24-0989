#include<stdio.h>
int sum(int n,int s){
    if (n==0){
      printf("The sum of the digits is %d",s);
        return 0;
    }
   int p;
   p=n%10;
return sum(n/10,s+p);
}
int main () {
    int n,s;
printf("Enter the number!\n");
scanf("%d",&n);
sum(n,0);
return 0;
}