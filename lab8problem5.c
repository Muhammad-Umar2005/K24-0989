#include <stdio.h>

int main() {
int n,i,j;
printf("Enter any number!\n");
scanf("%d",&n);
printf("Pattern of odd numbers start from user's input!\n");
for(i=n;i>=1;i-=2){
for(j=n;j>i-1;j-=2){
    printf("%d ",j);
}
printf("\n");
}
    return 0;
}