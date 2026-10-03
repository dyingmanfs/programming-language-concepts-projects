//
// Created by Furkan on 5/22/2024.
//

#ifndef AS3_WILD_H
#define AS3_WILD_H
#include "Elements.h"

class Wild: public Elements{
private:
        int effect2;
public:
     Wild(int size);

    Wild(int size, int effect2);

    int diceeffect(int i);
};


#endif //AS3_WILD_H
