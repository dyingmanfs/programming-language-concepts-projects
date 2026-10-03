//
// Created by Furkan on 5/15/2024.
//

#ifndef AS2_UNIVERSITY_H
#define AS2_UNIVERSITY_H
#include "Building.h"


class University {
private:
    char *Name;
    class Building * building[20];
    int Numberofbuilding;
public:
    University();
    University(char*);

    void setNumberofbuilding(int numberofbuilding);

    char *getName() const;

    void setName(char *name);

    void addBuilding( char *buildingname,int sizem);

    void printBuildings();
    void printRooms();
    void  printRoomsByType(int);
    void printAvailableOffices();
    void  printTotalCapacityOfOffices();
    void  printSuitableClassrooms(int);
    void printRoomTypeStatistics();
    void addroom(int number,char  *roomname,int floor,office Officename,int numberofpeople);
    void addroom(int number,char  *roomname,int floor, int capaciy);

    virtual ~University();

};


#endif //AS2_UNIVERSITY_H
