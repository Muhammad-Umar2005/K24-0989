#include<stdio.h>
int main(){
    int i,n,arr[10],max,min;
    printf("Enter the elements of the array:\n");
    scanf("%d",&n);
    printf("Enter the array:");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);}
	max=arr[0];
	min=arr[0];
    for(i=1;i<n;i++){
	if (max<arr[i])
	max=arr[i];
	if(min>arr[i])
	min=arr[i];}
	printf("Maximum=%d\nMinimum=%d",max,min);
	return 0;
	}