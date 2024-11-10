#include <stdio.h>
#include<string.h>
void appends_str(char *desti,char *source,int n){
    int len=strlen(desti);
    for (int i=0;i<n;i++){
        desti[len+i]=source[i];
    }
printf("The concatenated string is : %s",desti);

    return;
}
int main() {
char desti[100],source[100];
int n;
printf("Enter the destination string!\n");
fgets(desti,sizeof(desti), stdin);
    desti[strcspn(desti,"\n")] = '\0';  
printf("Enter the source string!\n");
fgets(source,sizeof(source), stdin);
printf("Enter the characters you want to append!\n");
scanf("%d",&n);
appends_str(desti,source,n);
    return 0;
}