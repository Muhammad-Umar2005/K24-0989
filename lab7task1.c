#include <stdio.h>
int main(){
    int i,n,arr[100];
    printf("Enter the elements of the array:\n");
    scanf("%d",&n);
    printf("Enter the array:");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);}
    int sum=0;
    for(i=0;i<n;i++){
    sum+=arr[i];
    }
    printf("Sum of array elements is %d:",sum);
    return 0;
}