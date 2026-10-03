//
// Created by Furkan on 5/22/2024.
//

#include "Bear.h"
#include <cstring>
Bear::Bear(int size) : Wild(size) {
    strcpy(character,"B");
    sizecell =3;
    effect = (size/2)*-1;
}
