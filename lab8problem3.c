#include <stdio.h>

int main() {
    int sum=0,sum1=0;
    int arr[2][3][3]={{{3,4,5},
    {4,5,6},
    {5,6,7}},
    {{6,7,8}
    ,{7,8,9}
    ,{2,3,4}}
    };
    for (int z=0;z<2;z++){
    for (int x=0;x<3;x++){
        for(int y=0;y<3;y++){
     printf("%d",arr[z][x][y]);
        }
        printf("\n");
    }
    printf("\n");
}
for (int z=0;z<1;z++){
    for (int x=0;x<3;x++){
        for(int y=0;y<3;y++){
sum+=arr[z][x][y];
        }
        printf("\n");
    }
    printf("Sum of 1st page is %d",sum);
}
for (int z=1;z<=1;z++){
    for (int x=0;x<3;x++){
        for(int y=0;y<3;y++){
     sum1+=arr[z][x][y];
        }
        printf("\n");
    }
printf("Sum of 2nd page is %d",sum1);
}
    return 0;
}