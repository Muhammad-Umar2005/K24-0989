#include <stdio.h>

int main() {
int a[3][3]={
    {3,4,5},
    {4,5,6},
    {2,4,6}};
int b[3][3]={
    {1,2,4},
    {5,6,7},
    {9,6,2}};
    int i,j,k;
    int c[3][3];
    for (i=0;i<3;i++){
    for (j=0;j<3;j++){
    for (k=0;k<3;k++){
        c[i][j]+=a[i][k]*b[k][j];
    }
        printf("\n");
    }
    }
	 for (i = 0; i < 3; i++) {
     for (j = 0; j < 3; j++) {
    printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

