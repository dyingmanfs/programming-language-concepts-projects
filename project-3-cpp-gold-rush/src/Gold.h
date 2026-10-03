//
// Created by Furkan on 5/21/2024.
//

#ifndef AS3_GOLD_H
#define AS3_GOLD_H
#include "Elements.h"

class Gold: public Elements{
private:
    int sizecell;
public:
    Gold(int i);

    int incersescore();
};


#endif //AS3_GOLD_H
