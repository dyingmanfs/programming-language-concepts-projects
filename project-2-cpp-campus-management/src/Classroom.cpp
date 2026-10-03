//
// Created by Furkan on 5/2/2024.
//
#include <iostream>
#include <cstring>
#include "Room.h"
#include "Classroom.h"
using namespace std;

int Classroom::getCapacity(){
    return Capacity;
}

void Classroom::setCapacity(int capacity) {
    this->Capacity = capacity;
}
Classroom::Classroom(){
    setRoomName("Undifend");
    setFloor(-1);
    Capacity = -1;
}
Classroom::Classroom(int Capacity,char *room_name,int floor):Room(room_name,  floor){
    this->Capacity = Capacity;
}
Classroom& Classroom::operator =  (const Classroom& cls){
    if (this == &cls) {
        cout << "Student& operator=(const Student& std) has been called!" << endl;
        return *this;
    }
    delete[] room_name;
    this->room_name = new char[100];
    strcpy(this->room_name, cls.room_name);
    this->floor = cls.floor;
    this->Capacity = cls.Capacity; cout << "Student& operator=(const Student& std) has been called!" << endl;
    return *this;
}

bool Classroom::checkSuitability(int student) {
    if (student>Capacity){
        return false;
    }
    else {
        return true;
    }
}
void Classroom::printRoom(void){
    cout << "Classroom name = " << getRoomName() << endl;
    cout << "Classroom floor number = " << getFloor() << endl;
    cout << "Classroom capacity = "<< getCapacity()<<endl;
}

Classroom::~Classroom() {
delete[]room_name;
}

