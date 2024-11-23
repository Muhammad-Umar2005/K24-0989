#include<stdio.h>
int bubblesort(int n,int arr[n],int i){
    if (i==n){
    return 0;
    }
    for (int a=0;a<n;a++){
        for (int j=a+1;j<n;j++){
            if(arr[j]<arr[a]){
               int temp=arr[a];
                arr[a]=arr[j];
                arr[j]=temp;
        }
    }
    }
    return (n,arr,i+1);
}
int main(){
    int i,n;
    printf("Enter the size of array!\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array!\n");
      for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubblesort(n,arr,0);
    for (int p=0;p<n;p++){
        printf("%d ",arr[p]);
    }
    return 0;
}