#include<stdio.h>
#include<string.h>

int main() {
    int n;
    char given[9][9] = {"manuals", "computer", "watches", "cars", "cricket", "football", "freefire", "garden", "stadium"};
    char arr[20];

    printf("Enter the number of characters present in an array!\n");
    scanf("%d",&n);

    printf("Enter the characters of an array!\n");
    scanf("%s",arr);

    int found = 0;
    for (int i = 0; i < 9; i++) {
        if (strstr(given[i],arr) != NULL) {
            printf("Found");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Not Found\n");
    }
    return 0;
}
