#include<stdio.h>
#include<string.h>
int main(){
struct movies{
    char title[30];
    char genre[30];
    long int release_year;
    float rating;
    char director[30];
};
struct movies arr[5];

    strcpy(arr[0].title,"Bhajrangi Bhaijaan");
    strcpy(arr[0].genre,"Action Movie");
    arr[0].release_year=2015;
    arr[0].rating=4.7;
    strcpy(arr[0].director,"Kabir Khan");

    strcpy(arr[1].title,"Conjuring 3");
    strcpy(arr[1].genre,"Horror Movie");
    arr[1].release_year=2021;
    arr[1].rating=4.1;
    strcpy(arr[1].director,"Michael Chaves");

    strcpy(arr[2].title,"Venom 3");
    strcpy(arr[2].genre,"Action Movie");
    arr[2].release_year=2024;
    arr[2].rating=4;
    strcpy(arr[2].director,"Kalley Marcel");

    strcpy(arr[3].title,"IT Chapter 2");
    strcpy(arr[3].genre,"Horror Movie");
    arr[3].release_year=2019;
    arr[3].rating=3.5;
    strcpy(arr[3].director,"Andy Muschietti");

    strcpy(arr[4].title,"Justice League");
    strcpy(arr[4].genre,"Action Movie");
    arr[4].release_year=2017;
    arr[4].rating=2.7;
    strcpy(arr[4].director,"Zack Synder");

printf("1.Bhajrangi Bhaijaan\n2.Conjuring 3\n3.Venom 3\n4.IT Chapter 2\n5.Justice league\n");
printf("Please select any option to see the details of the selected movie\n");
int n;
scanf("%d",&n);
    printf("-------------Details of Given movie-------------\n");
    printf("Name of given movie is %s\n",arr[n-1].title);
    printf("Rating of %s is %.2f\n",arr[n-1].title,arr[n-1].rating);
    printf("Director of %s is %s\n",arr[n-1].title,arr[n-1].director);
    printf("Release Year of %s is %d\n",arr[n-1].title,arr[n-1].release_year);
    printf("%s is %s\n",arr[n-1].title,arr[n-1].genre);

return 0;
}