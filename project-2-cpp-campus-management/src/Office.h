//
// Created by Furkan on 5/7/2024.
//

#ifndef AS2_OFFICE_H
#define AS2_OFFICE_H
#include <iostream>


using namespace std;
#include "Room.h"
enum office {None, CoordinatorOffice, StandardOffice,SharedOfficeFor2People, SharedOfficeFor3People, SharedOfficeFor10People};
class Office: public Room{

private:

    office officetype;
    int numberofpeople;
public:
    Office();
    Office(office officetype,int numberofpeople,char *room_name,int floor);
    Office& operator=(const Office& Office);

    office getOfficetype() const;

    void setOfficetype(office officetype);

    int getNumberofpeople() const;

    void setNumberofpeople(int numberofpeople);
     int isFull();
    int  getCapacity();
    void printRoom();

     ~Office();


};


#endif //AS2_OFFICE_H
