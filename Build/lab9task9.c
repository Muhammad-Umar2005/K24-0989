#include <stdio.h>
#include<string.h>
int main() {
 char str[50];
 char arr[50];
 printf("Enter the string!\n");
 fgets(str,sizeof(str), stdin);
 int x=strlen(str);
int temp=x;
x--;
for (int i=0;i<temp;i++){
   x--;
    arr[i]=str[x];
}
printf("%s",arr);
    return 0;
}