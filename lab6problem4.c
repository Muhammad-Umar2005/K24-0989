#include<stdio.h>
int main()
{
int sum;
int n=0;
printf ("1,2,");
for (int i=1,j=2;n<4;n++){
sum=i+j;
i=j;
j=sum;
printf("%d,",sum);
}
return 0;
}
