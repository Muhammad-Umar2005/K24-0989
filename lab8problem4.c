#include <stdio.h>

int main() {
        int i,j,min,max,Prime=0;
    printf("Enterthe minimum and maximum number!\n");
    scanf("%d%d",&min,&max);
     for (i=min;i<=max;i++) {
         Prime=1;
        for (j=2;j*j<=i;j++) {
            if (i %j==0){
                Prime=0;
                break;
        }
     }
        if (Prime) {
            printf("%d ", i);
        }
     }
    return 0;
}