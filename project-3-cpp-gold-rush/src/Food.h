//
// Created by Furkan on 5/21/2024.
//

#ifndef AS3_FOOD_H
#define AS3_FOOD_H

#include "Elements.h"
class Food : public Elements{
private:
    int sizecell;

public:
    Food(int size);

    int  effecthealt();
};


#endif //AS3_FOOD_H
