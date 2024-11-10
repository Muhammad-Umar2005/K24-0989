#include<stdio.h>
int maxmin(int arr[],int n){
	int max,min,i;
	printf("Enter the elements of array\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	max=min=arr[0];
	for(i=1;i<n;i++){
	if(arr[i]>max){
	max=arr[i];}
	if(arr[i]<min){
	min=arr[i];}
	}
    int src[2]={max,min};                
	return src;
}
int main(){
	int n;
	
	printf("Enter the size of array!\n");
	scanf("%d",&n);
	int arr[n],src[2];
	maxmin(arr,n);
	printf("Maximum is %d\nMinimum is %d",src[0],src[1]);
	return 0;
}



