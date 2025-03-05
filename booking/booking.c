#include<stdio.h>
#include<string.h>
#include<time.h>

typedef struct{
 int room_number;
 int is_occupied;

}Room;


typedef struct{
char service_type[10];
int pricing;

}Service;

int main(){
  const Max_rooms = sizeof(Room) * 10;  const Max_services = sizeof(Service) * 10;
  int i,x;
  int prefered_room;

  srand(time(NULL));//uses time as the seed for randomly generating values

  Room rooms[Max_rooms];
  Service services[10];

  int booked_rooms(){ //random number genarator to randomly book rooms
    for(i=0;i<10;i++){
      rooms[i].is_occupied = rand() % 2;
//      printf("%d\n",rooms[i].is_occupied);

      if(rooms[i].is_occupied == 1){
      printf("Room %d is booked\n",i+1);
      }else{
      printf("Room %d is vacant\n",i+1);
      }
    }
  }

  int booking(){
    printf("Which room would you like to book: ");
    scanf("%d",&prefered_room);
    while(rooms[prefered_room-1].is_occupied != 0){
      printf("Room occupied \nPlease select another one: ");
      scanf("%d",&prefered_room);
    }
    printf("You have chosen room %d",prefered_room);

    }


booked_rooms();
booking();
return 0;
}
