//
// Created by Furkan on 5/22/2024.
//

#include "Wolf.h"
#include <cstring>

Wolf::Wolf(int size) : Wild(size) {
    strcpy(this->character,"W");
    this->sizecell = 1;
    effect = size/4*-1;
}
