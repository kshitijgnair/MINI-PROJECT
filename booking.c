#include<stdio.h>
int main()
{
    int seats;
    printf("Available seats- 50\n");
    printf("Enter the number of seats to be booked-");
    scanf("%d",&seats);
    printf("Seats to be booked-%d\n",seats);
    if(50>seats){
        printf("Class available\n");
        printf("1)bronze\n2)silver\n3)gold\n");
        int class;
        printf("Select class-");
        scanf("%d",&class);
        int price;
        if(class==1){
            price=2000;
        }
        else if(class==2){
            price=4000;
        }
        else if(class==3){
            price=6000;
        }
        char name[50],dest[50];
        int age;
        printf("Enter your name-");
        scanf("%s",&name);
        printf("Enter your age-");
        scanf("%d",&age);
        printf("Enter your destination-");
        scanf("%s",&dest);
        printf("RECPIT\nName-%s\nage-%d\ndestination-%s2\nPrice-%d\nSeats booked2",name,age,dest,price*seats);
    }
    else
    printf("Seats full");
    return 0;
}