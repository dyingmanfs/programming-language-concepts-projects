//
// Created by Furkan on 5/28/2024.
//

#ifndef AS3_GRID_CLASS_H
#define AS3_GRID_CLASS_H
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cstring>
#include "Bear.h"
#include "Elements.h"


using namespace std;

class Grid_Class {
private:
    int number;
    Elements ***bear;
public:  // Change from private to public
    Grid_Class();
    Grid_Class(int number1);

    void bear3();
    void wood1();
    void wolf();
    void Food1();
    void Medical();
    void Gold2();
    void deploy_elements();
    char* show(int x, int y);

    Elements *getTable(int x, int y);


};


#endif //AS3_GRID_CLASS_H
