#include <stdio.h>

int main() {
    int i,j;
    int arr[3][3];
    printf("Enter elements of 3*3 matrix!\nPlease enter elements column wise!\n");
    for(i=0;i<3;i++){
        for (j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
      for(i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
       int max=arr[0][0];
       int max1=arr[0][1];
       int max2=arr[0][2];
          for(int i=0;i<3;i++){
              if (arr[i][0]>max)
              max=arr[i][0];
              if (arr[i][1]>max1)
              max1=arr[i][1];
              if (arr[i][2]>max2)
              max2=arr[i][2];
          }
          int min=arr[0][0];
          int min1=arr[1][0];
          int min2=arr[2][0];
          for(int j=0;j<3;j++){
                if (arr[0][j]<min)
              min=arr[0][j];
              
           if (arr[1][j]<min1)
              min1=arr[1][j];
              if (arr[2][j]<min2)
              min2=arr[2][j];
          }
           if (max==min2 || max==min)
         printf("Saddle point of 1st column is %d",max);
           if (max1==min1)
              printf("Saddle point of 2nd column is %d",max1);
           if (max2==min || max2==min2)
                 printf("Saddle point of 3rd column is %d",max2);
        
    return 0;
}