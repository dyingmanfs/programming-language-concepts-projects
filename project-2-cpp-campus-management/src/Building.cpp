//
// Created by Furkan on 5/2/2024.
//

#include "Building.h"
#include <iostream>
#include <cstring>

using namespace std;

Building::Building() {
    int size = sizeof("Undefined")-1;
    strncpy(buildingname, "Undefined", size);
    buildingname[size] = '\0' ;
    sizem = -1;
}
Building::Building(  char *buildingname,int sizem){
    numberofrooom = 0;
    this->sizem=sizem;
   this-> buildingname = new char [100];
    strcpy(this->buildingname,buildingname);
    //cout<<"name is "<< buildingname << " number of room is "<< numberofrooom << "sizem is "<< sizem<<endl;
}
char *Building::getBuildingname() const {
    return buildingname;
}

void Building::setBuildingname(char *buildingname) {
    Building::buildingname = buildingname;
}

int Building::getSizem() const {
    return sizem;
}

void Building::setSizem(int sizem) {
    Building::sizem = sizem;
}

const class Room *Building::getRoom()  {
    return *room;
}

int Building::getNumberofrooom() const {
    return numberofrooom;
}

void Building::setNumberofrooom(int numberofrooom) {
    Building::numberofrooom = numberofrooom;
}
void Building::addRoom(int Capacity,char *room_name,int floor) {
    if (sizem>100){
        cout<<"capacity error"<<endl;
    }
    else{

        room[numberofrooom] = new Classroom( Capacity, room_name, floor);
        room[numberofrooom]->setRoomtype(1);
        //room[numberofrooom]->printRoom();
        numberofrooom = numberofrooom+1;
    }

}

void Building::addRoom(office officetype,int numberofpeople, char *room_name,int floor) {
    if (sizem>100){
        cout<<"capacity error"<<endl;
    }
    else{
        room[numberofrooom] = new Office(  officetype, numberofpeople,  room_name, floor);
        room[numberofrooom]->setRoomtype(2);
        //room[numberofrooom]->printRoom();
        numberofrooom = numberofrooom+1;

    }

}
void Building::printBuilding() {
    cout<<"Building name =  "<<getBuildingname()<<endl;
    cout<<"Building size =  "<<getSizem()<<endl;
    cout<<"Building number of rooms = "<<getNumberofrooom()<<endl;
}
void Building::printRooms() {

        for (int i = 0; i < numberofrooom; ++i) {

                room[i]->printRoom();
                cout<<endl;

        }




}

int Building::getTotalCapacity(){
    int a = 0 ;



    for (int i = 0; i < numberofrooom; ++i) {
        if(room[i]->getRoomtype()==2){
        a = a + room[i]->getCapacity();}
    }


    return a;

};
int Building::getNumberOfClassrooms() {
    int counter = 0 ;



    for (int i = 0; i < numberofrooom; ++i) {
        if(room[i]->getRoomtype()==1){
            counter++;}
    }
    return counter;
}
int Building::getNumberOfOffices() {
    int counter =0 ;



    for (int i = 0; i < numberofrooom; ++i) {
        if(room[i]->getRoomtype()==2){
            counter++;}
    }
    return counter;
}

void Building::printRoomsByType(int type) {
if(type==1){
    for (int i = 0; i < numberofrooom; ++i) {
        if(room[i]->getRoomtype()==1){
            room[i]->printRoom();
            cout<<endl;
            }
    }

}
   else  if(type==2){
        for (int i = 0; i < numberofrooom; ++i) {
            if(room[i]->getRoomtype()==2){
                room[i]->printRoom();
            }
        }

    }

};

void Building::printAvailableOffices(){
    for (int i = 0; i < numberofrooom; ++i) {
        if(room[i]->getRoomtype()==2){
            if(!(room[i]->isFull())){
            room[i]->printRoom();}
        }
    }
}

void Building::printSuitableClassrooms(int c) {
    for (int i = 0; i < numberofrooom; ++i) {
        if(room[i]->getRoomtype()==1){
        if(room[i]->checkSuitability(c)){

                room[i]->printRoom();
                cout<<endl;
        }
        }
    }
}

Building::~Building() {
delete [] buildingname;
    for (int i = 0; i < numberofrooom; ++i) {
        delete room[i];
    }
}
