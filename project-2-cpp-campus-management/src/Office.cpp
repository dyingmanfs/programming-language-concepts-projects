//
// Created by Furkan on 5/7/2024.
//
#include "Room.h"
#include "Office.h"
#include <iostream>
#include <cstring>


using namespace std;
Office::Office() {
    setRoomName("Undifend");
    setFloor(-1);
    officetype = None;
}
Office::Office(office officetype,int numberofpeople, char *room_name,int floor):Room(room_name,  floor){
    this->officetype = officetype;
    this->numberofpeople = numberofpeople;
}
Office& Office::operator=(const Office& ofc){
    if (this == &ofc) {
        cout << "Office& operator=(const Student& std) has been called!" << endl;
        return *this;
    }
    delete[] room_name;
    this->room_name = new char[100];
    strcpy(this->room_name, ofc.room_name);
    this->officetype = ofc.officetype;
    this->floor = ofc.floor;
    this->numberofpeople = ofc.numberofpeople; cout << "Office& operator=(const Student& std) has been called!" << endl;
    return *this;
}
office Office::getOfficetype() const {
    return officetype;
}

void Office::setOfficetype(office officetype) {
    this->officetype = officetype;
}

int Office::getNumberofpeople() const {
    return numberofpeople;
}

void Office::setNumberofpeople(int numberofpeople) {
    Office::numberofpeople = numberofpeople;
}
 int Office::isFull(){
    if(numberofpeople>=getCapacity()){
        return 1;
    }
    else
        return 0;
}
int Office::getCapacity() {
    if(officetype == None){
        return 0;
    }
    else if(officetype==CoordinatorOffice){
        return 1;
    }

    else if(officetype==StandardOffice){
        return 1;
    }

    else if(officetype==SharedOfficeFor2People){
        return 2;
    }

    else if(officetype==SharedOfficeFor3People){
        return 3;
    }
    else if(officetype==SharedOfficeFor10People){
        return 10;
    }
    else{
        return -1;
    }

}
void Office::printRoom() {
    char officename[100];
    if (officetype==0){
        strcpy(officename,"None");
    }
    else if(officetype == 1){
        strcpy(officename,"CoordinatorOffice");
    }
    else if(officetype==2){
        strcpy(officename,"StandardOffice");
    }
    else if(officetype==3){
        strcpy(officename,"SharedOfficeFor2People");
    }
    else if(officetype==4){
        strcpy(officename,"SharedOfficeFor3People");
    }
    else if(officetype==5){
        strcpy(officename,"SharedOfficeFor10People");
    }

    cout<<"Office name ="<<room_name<<endl;
    cout<<"Office floor Number ="<< floor<<endl;
    cout<<"Office type =  " <<officename<<endl;
    cout<<"Number of people in office  "<< numberofpeople<<endl;
    cout<<"Office capacity = "<<getCapacity()<<endl;
    if(isFull()){
        cout<<"Office is full "<<endl;
    }
    else{
        cout<<"Office is not full"<<endl;
    }

}

Office::~Office() {
delete [] room_name;
}
