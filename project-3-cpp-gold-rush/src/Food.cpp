//
// Created by Furkan on 5/21/2024.
//
#include <iostream>
#include <cstring>
#include "Food.h"
int Food::effecthealt() {
    return size/6;
}

Food::Food(int size) : Elements(size) {
    sizecell = 1;
    effect = size/8;
    strcpy(this->character,"F");
}
