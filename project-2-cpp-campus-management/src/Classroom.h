//
// Created by Furkan on 5/2/2024.
//

#ifndef AS2_CLASSROOM_H
#define AS2_CLASSROOM_H

#include "Room.h"
class Classroom : public Room{
private:
    int Capacity;
public:
    Classroom();

   Classroom(int Capacity,char *room_name,int floor);
    Classroom& operator=(const Classroom& cls);

    int getCapacity();

    void setCapacity(int capacity);
    bool checkSuitability(int student);
    void  printRoom(void);

    ~Classroom();

};


#endif //AS2_CLASSROOM_H
