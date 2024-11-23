#include<stdio.h>
void array(int arr[],int n,int i){
   
if (i==n){
return;
}
scanf("%d",&arr[i]);
array(arr,n,i+1);
 return;
}
int main () {
    int n,i;
printf("Enter the size of array!\n");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of array!\n");
array(arr,n,0);
printf("The given array elements are!\n");
for (int j=0;j<n;j++){
printf("%d\n",arr[j]);
}
return 0;
}