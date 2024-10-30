#include <stdio.h>

int main() {
 for (int i=0;i<=3;i++){
    for (int j=i;j<3;j++){
        printf(" ");
}
    for (int j=0;j<=i;j++){
        printf("*");
		printf(" ");
    }
        printf("\n");
    }
	for (int i=0;i<=2;i++){
		for (int j=i;j>=0;j--){
		printf(" ");}
		for (int k=i;k<=2;k++){
			printf("*");
			printf(" ");
		}
		printf("\n");
	}
    return 0;
}
