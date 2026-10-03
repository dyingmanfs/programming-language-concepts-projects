//
// Created by Furkan on 5/21/2024.
//

#ifndef AS3_WOOD_H
#define AS3_WOOD_H

#include "Elements.h"
class Wood: public Elements{
private:
    int sizecell;
public:
    int effecthealt();
    Wood(int size);
};


#endif //AS3_WOOD_H
