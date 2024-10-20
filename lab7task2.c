#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in array\n");
    for (int i=0;i<n;i++){
     scanf("%d",&arr[i]);}
        for(int i=n;i>0;i--){
            printf("%d ",arr[i-1]);
        }
    return 0;
}