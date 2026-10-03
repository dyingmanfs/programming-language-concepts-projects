//
// Created by Furkan on 5/15/2024.
//

#include "University.h"
#include <cstring>
#include <iostream>
University::University() {
    Name = new char [100];
    strcpy(Name,"Undefined");
    Numberofbuilding = 0;
    cout<<"name is "<<Name<<" Number of building is "<< Numberofbuilding<<endl;
}

University::University(char * Name) {
    this->Name = new char [100];
    strcpy(this->Name,Name);
    this->Numberofbuilding = 0;
    cout<<"name is "<<this->Name<<" Number of building is "<< this->Numberofbuilding<<endl;
}


void University::setNumberofbuilding(int numberofbuilding) {
    Numberofbuilding = numberofbuilding;
}

char *University::getName() const {
    return Name;
}

void University::setName(char *name) {
    this->Name = name;
}
void University::addBuilding(char *buildingname, int sizem) {
    building[Numberofbuilding] = new Building(buildingname,sizem);
    Numberofbuilding++;
}
void  University::printBuildings(){
    for (int i = 0; i < Numberofbuilding; ++i) {
        cout<<"["<<i+1<<"]";
        building[i]->printBuilding();
        cout<<endl;
    }
}
void  University::printRooms() {
    cout<<"Rooms in " << getName() << " university: "<<endl;
    for (int i = 0; i < Numberofbuilding; ++i) {
        cout<<"All Rooms in " <<building[i]->getBuildingname() <<" building: "<<endl;
        building[i]->printRooms();
        cout<<endl;
    }
}
void  University::printRoomsByType(int t) {
    if (t==1){
    cout<<"Classrooms in " << getName() << " university: "<<endl;
    for (int i = 0; i < Numberofbuilding; ++i) {
        cout<<"All classrooms in " <<building[i]->getBuildingname() <<" building: "<<endl;
        building[i]->printRoomsByType(t);
        cout<<endl;
    }}
    else{
        cout<<" Offices in " << getName() << " university: "<<endl;
        for (int i = 0; i < Numberofbuilding; ++i) {
            cout<<"All offices in " <<building[i]->getBuildingname() <<" building: "<<endl;
            building[i]->printRoomsByType(t);
            cout<<endl;
    }}
}
void University::printAvailableOffices(){
    cout<<"Available offices " << getName() << " university: "<<endl;
    for (int i = 0; i < Numberofbuilding; ++i) {
        cout<<"Available offices in " <<building[i]->getBuildingname() <<" building: "<<endl;
        cout<<endl;
        building[i]->printAvailableOffices();
        cout<<endl;
    }
}
void University::printTotalCapacityOfOffices() {
    int Total =0;
    for (int i = 0; i < Numberofbuilding; ++i) {
        Total = building[i]->getTotalCapacity();
        cout<<"Office capacity in "<<building[i]->getBuildingname()<<" building = "<<Total<<endl;
        cout<<endl;
    }

}
void University::printSuitableClassrooms(int number){
    for (int i = 0; i < Numberofbuilding; ++i) {
        cout<<"Classrooms which are suitable for "<<number<<" students in " << building[i]->getBuildingname()<< "building :" <<endl;

        building[i]->printSuitableClassrooms(number);
        cout<<endl;
    }
}
void University::addroom(int number,char  *roomname,int floor,office Officename,int numberofpeople){
int numberbulding = number-1;
building[numberbulding]->addRoom(Officename,numberofpeople,roomname,floor);
}

void University::addroom(int number,char  *roomname,int floor, int capaciy){
    int numberbulding = number-1;
    building[numberbulding]->addRoom(capaciy,roomname,floor);
}

void University::printRoomTypeStatistics(){
    int office=0;
    int classroom=0;
    for (int i = 0; i < Numberofbuilding; ++i) {

        office= office + building[i]->getNumberOfOffices();
        classroom = classroom +  building[i]->getNumberOfClassrooms();



    }
    cout<<"Classrooms in " << getName() << " university: "<<endl;
    cout<<"Number of offices = "<<office<<endl;
    cout<<"Number of classrooms = "<<classroom<<endl;
    cout<<endl;

}

University::~University() {
delete [] Name;
    for (int i = 0; i < Numberofbuilding; ++i) {
        delete building[i];
    }
}

