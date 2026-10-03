//
// Created by Furkan on 5/2/2024.
//

#ifndef AS2_ROOM_H
#define AS2_ROOM_H


class Room {
protected:
    char *room_name;
    int roomtype;
    int floor;
public:
    Room();

    Room(char *room_name, int floor);
    Room& operator=(const Room& cls);



    char *getRoomName();

    void setRoomName(char *room_name);

    int getFloor() const;

    void setFloor(int floor);
    Room(const Room& std);
    virtual void printRoom();
    virtual int getCapacity();

    int getRoomtype() const;
    virtual int isFull();
    void setRoomtype(int roomtype);
    virtual bool checkSuitability(int student);

     ~Room();

};



#endif //AS2_ROOM_H
