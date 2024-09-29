#include<stdio.h>
int main(){
int a,b,c;
printf("Enter Three Numbers\n");
scanf("%d%d%d",&a,&b,&c);
if (b>c && b>a || a>b && a>c ){
if (b>a && b>c)
{printf("b is Greater Than a and c");}
else 
{printf("a is greater than b and c");
}
}else printf("c is Greater Than a and b");
return 0;

}
