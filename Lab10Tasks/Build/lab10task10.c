#include<stdio.h>
#include<string.h>
#include<math.h>
int main() {
    int n;
struct travel_packages{
    char pack_name[30];
    char desti[30];
    int cost;
    char duration[20];
    int available_seats;
};
struct travel_packages arr[5];

strcpy(arr[0].pack_name,"Family Holiday Package");
strcpy(arr[0].desti,"Islamabad");
arr[0].cost=12000;
strcpy(arr[0].duration,"7 Days");
arr[0].available_seats=11;

strcpy(arr[1].pack_name,"Summer Vacation Package");
strcpy(arr[1].desti,"Istanbul");
arr[1].cost=100000;
strcpy(arr[1].duration,"14 Days");
arr[1].available_seats=19;

strcpy(arr[2].pack_name,"Winter Vacation Package");
strcpy(arr[2].desti,"KPK");
arr[2].cost=26000;
strcpy(arr[2].duration,"14 Days");
arr[2].available_seats=17;

strcpy(arr[3].pack_name,"Luxury Package");
strcpy(arr[3].desti,"Pakistan Tour");
arr[3].cost=65000;
strcpy(arr[3].duration,"9 Days");
arr[3].available_seats=16;

strcpy(arr[4].pack_name,"Thailand Tour Package");
strcpy(arr[4].desti,"Thailand");
arr[4].cost=120000;
strcpy(arr[4].duration,"14 Days");
arr[4].available_seats=21;

printf("\n----------Details of Packages Available!-------------\n");

for (int i=0;i<5;i++){
    
printf("----------Details of %dth Packages Available!-------------\n",i+1);

printf("Name of %dth available package is %s \n",i+1,arr[i].pack_name);

printf("Destination of %dth available package is %s \n",i+1,arr[i].desti);

printf("Cost of %dth available package is %d \n",i+1,arr[i].cost);

printf("Duration of %dth available package is %s \n",i+1,arr[i].duration);

printf("Seats of %dth available package is %s \n",i+1,arr[i].available_seats);
}
printf("Please enter package number you want to book!\n");
scanf("%d",&n);
printf("\nPlease enter the no. of seats you want to choose!");
int a;
scanf("%d",&a);
arr[n-1].available_seats=arr[n-1].available_seats-a;

for(int i=0;i<5;i++){
  if (arr[i].available_seats!=0){
      printf("----------Details of %dth Packages Available!-------------\n",i);

printf("Name of %dth available package is %s \n",i,arr[i-1].pack_name);

printf("Destination of %dth available package is %s \n",i,arr[i-1].desti);

printf("Cost of %dth available package is %d \n",i,arr[i-1].cost);

printf("Duration of %dth available package is %s \n",i,arr[i-1].duration);

printf("Seats of %dth available package is %s \n",i,arr[i-1].available_seats);

  }
}
printf("Package Details after booking\n");
for (int i=0;i<n;i++){
     printf("----------Details of %dth Packages Available!-------------\n",i);

printf("Name of %dth available package is %s \n",i,arr[i-1].pack_name);

printf("Destination of %dth available package is %s \n",i,arr[i-1].desti);

printf("Cost of %dth available package is %d \n",i,arr[i-1].cost);

printf("Duration of %dth available package is %s \n",i,arr[i-1].duration);

printf("Seats of %dth available package is %s \n",i,arr[i-1].available_seats);

  }
  return 0;
}