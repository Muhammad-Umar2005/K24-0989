#include<stdio.h>
int main()
{
	int n=1;
	printf("65536,");
	for(int i=65536;i>0;n++){
		i=i/(n+1);
		printf("%d,",i);
	}
	return 0;
}
