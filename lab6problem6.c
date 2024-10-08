#include<stdio.h>
int main()
{
int multiply;
int n=0,a=0;
printf ("1,2,");
for (int i=1,j=2;n<7;n++){
multiply=i*j;
i=j;
j=multiply;
printf("%d,",multiply);
}
return 0;
}
