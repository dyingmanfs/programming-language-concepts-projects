//
// Created by Furkan on 5/2/2024.
//
#include <iostream>
#include <cstring>

using namespace std;

#include "Room.h"
// Default constructor

Room::Room(){
    room_name = new char[100];
    strcpy(room_name, "Undefined");
    floor = -1;
};
//  Constructor

Room::Room(char *room_name, int floor) {
    this->room_name = new char[100];
    strcpy(this->room_name, room_name);
    this->floor = floor;
}
// Copy constructor

Room::Room(const Room& std) {
    this->room_name = new char[100];
    strcpy(this->room_name, std.room_name);
    this->floor = std.floor;
    cout << "Student& operator=(const Student& std) has been called!" << endl;
}
// Assignment operator
Room& Room::operator =  (const Room& cls){
    if (this == &cls) {
        cout << "Student& operator=(const Student& std) has been called!" << endl;
        return *this;
    }
    delete[] room_name;
    this->room_name = new char[100];
    strcpy(this->room_name, cls.room_name);
    this->floor = cls.floor;
    cout << "Student& operator=(const Student& std) has been called!" << endl;
    return *this;
}



char *Room::getRoomName()  {
    return room_name;
}

void Room::setRoomName(char *room_name) {
    room_name = new char[100];
    strcpy(this->room_name, room_name);

}

int Room::getFloor() const {
    return floor;
}

void Room::setFloor(int floor) {
    Room::floor = floor;
}
//print room
 void Room::printRoom(){
    cout << "Room name is " << getRoomName()  << endl;
    cout << "Floor is " << floor << endl;

}

int Room::getRoomtype() const {
    return roomtype;
}

void Room::setRoomtype(int roomtype) {
    Room::roomtype = roomtype;
}
// I added virtual method because the code needs to access getCapacity in derived classes in Office.
// Since I don't use the return value in the base class, so I return a random value
int Room::getCapacity() {
    return 0;
}
// I added virtual method because the code needs to access isFull in derived classes in Office.
// Since I don't use the return value in the base class, so I return a random value
int Room::isFull() {
    return 0;
}
// I added virtual method because the code needs to access isFull in derived classes in Classromm.
// Since I don't use the return value in the base class, so I return a random value
bool Room::checkSuitability(int student){
    return false;
}
// Destructor
Room::~Room() {
delete [] room_name;
}
