#include<stdio.h>
int temp(int arr[],int n,int i){
    int limit;
    static int count=0;
   if (i==n) {
       return count;
   }
 else if (arr[i]>limit){
       count++;
  }
return temp(arr,n,i+1);
}
int main(){
    int n,i;
      int limit=35;
        printf("Enter the size of array!\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the temperature in celsius!\n");
    for (int j=0;j<n;j++){
        scanf("%d",&arr[i]);
    }
    printf("The temperature exceed the limit %d times",temp(arr,n,0));
    return 0;
}