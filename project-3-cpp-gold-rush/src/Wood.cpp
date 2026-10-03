//
// Created by Furkan on 5/21/2024.
//
#include <cstring>
#include "Wood.h"
int Wood::effecthealt(){
    return size/8;
};


Wood::Wood(int size) : Elements(size) {
    strcpy(character,"I");
    sizecell = 2;
    effect = size/4;

}