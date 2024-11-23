#include <stdio.h>
#include<string.h>

int main() {
   struct myflight{
    char flight_number[20];
    char departure_city[20];
    char destination_city[20];
    char date[20];
    int availableseats;
};
 struct myflight flight;
    strcpy(flight.flight_number,"12K-2033_P1");
    strcpy(flight.departure_city,"Karachi");
    strcpy(flight.destination_city,"Islamabad");
    strcpy(flight.date,"27-11-2024");
    int n;
    printf("Available Seats=24\n");
    printf("Enter the quantity of seats you want to book!\n");
    scanf("%d",&n);
    printf("Available seats: %d\n",24-n);
    printf("--------------Details of Your Flight-------------\n");
      
   printf("Flight number; %s\n",flight.flight_number);
   printf("Departure city: Karachi\nArrival City: Islamabad\n");
   printf("Date; %s\n",flight.date);
   printf("Available seats after booking: %d\n",24-n);
  
}