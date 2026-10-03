//
// Created by Furkan on 5/21/2024.
//
#include <cstring>
#include "MedicalSupplies.h"
int MedicalSupplies::effecthealt(){
    return size/4;
}

MedicalSupplies::MedicalSupplies(int size) : Elements(size) {
    sizecell = 1;
    effect = size/4;
    strcpy(character,"S");
}
