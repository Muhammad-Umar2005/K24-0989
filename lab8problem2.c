#include<stdio.h>
int main(){
	int rows,columns,i,j;
	int a[rows][columns];
printf("Enter the number of rows and columns of the matrix!\n");
scanf("%d\n%d",&rows,&columns);
for ( i=0;i<rows;i++){
	for ( j=0;j<columns;j++){
	scanf("%d",&a[i][j]);}
	printf("\n");
}
int b[columns][rows];
printf("Transpose of given matrix is:");
for ( i=0;i<columns;i++){
	for ( j=0;j<rows;j++){
	printf("%d ",b[j][i]);}
	printf("\n");
}
return 0;
}
