#include<stdio.h>
int main()
{
int n;
printf("Enter any Number\n");
scanf("%d",&n);
do { 
if (n/10==0)
{printf("%d is a single digit number:",n);
}else {printf("%d is a multi digit number:",n);
}
n=0;
}
while (n>0);

return 0;
}
