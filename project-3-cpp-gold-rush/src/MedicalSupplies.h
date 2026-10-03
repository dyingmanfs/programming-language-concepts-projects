//
// Created by Furkan on 5/21/2024.
//

#ifndef AS3_MEDICALSUPPLIES_H
#define AS3_MEDICALSUPPLIES_H

#include "Elements.h"
class MedicalSupplies: public Elements  {
private:
    int sizecell;
public:
    MedicalSupplies(int size);

    int effecthealt();
};


#endif //AS3_MEDICALSUPPLIES_H
