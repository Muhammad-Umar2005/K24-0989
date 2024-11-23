#include<stdio.h>
int con(int n,int i){
int static count=0;
    if (i==1000){
        return count;
    }
  count++;
  return con(n/10,i*10);
}
int main(){
 int n;
 printf("Enter the distance in metres!\n");
 scanf("%d",&n);
 int x=con(n,1);
 printf("The function was called %d times",x);
 return 0;
}