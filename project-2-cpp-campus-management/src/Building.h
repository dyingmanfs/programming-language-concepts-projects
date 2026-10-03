//
// Created by Furkan on 5/2/2024.
//

#ifndef AS2_BUILDING_H
#define AS2_BUILDING_H
#include "Room.h"
#include "Classroom.h"
#include "Office.h"




class Building {


private:
    char *buildingname;
    int sizem;
    class Room *room[100];
    int numberofrooom;
public:
    Building();
    Building(  char *buildingname,int sizem);
    char *getBuildingname() const;

    void setBuildingname(char *buildingname);

    int getSizem() const;

    void setSizem(int sizem);

    const  class Room *getRoom() ;

    int getNumberofrooom() const;

    void setNumberofrooom(int numberofrooom);
    void addRoom(int Capacity,char *room_name,int floor);
    void addRoom(office officetype,int numberofpeople, char *room_name,int floor);
    void printBuilding();
    void  printRooms();
    void printRoomsByType(int);
    int getTotalCapacity();
    int getNumberOfClassrooms();
    int getNumberOfOffices();
    void printAvailableOffices();
    void printSuitableClassrooms(int);

     ~Building();
};


#endif //AS2_BUILDING_H
