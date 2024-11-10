#include<stdio.h>
#include<string.h>
# define rows 5
void palindrome(char str[rows][20]){
int k=0;
int x=strlen(str[0]);
int y=strlen(str[1]);
int z=strlen(str[2]);
int a=strlen(str[3]);
int b=strlen(str[4]);
int arr[5]={x,y,z,a,b};
for (int j=0;j<rows;j++){
for (int i=0,p=arr[j];i<(arr[j]/2)+1;i++){
if (str[j][i]==str[j][p-1]){
    k++;

}
p--;
}
if (k==(arr[j]/2)+1){
printf("%s is a  palindrome",str[j]);}
else printf ("%s is not a palindrome",str[j]);
k=0;
printf("\n");
}
}
int main() {
char str[5][20];
printf("Enter five words\n");
for (int i=0;i<5;i++){
scanf("%19s",&str[i]);}
printf("The input words are!\n");
for (int i=0;i<5;i++){
printf("%s\n",str[i]);}
palindrome(str);
    return 0;
}

