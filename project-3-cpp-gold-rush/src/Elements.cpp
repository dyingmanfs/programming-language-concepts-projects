//
// Created by Furkan on 5/21/2024.
//

#include "Elements.h"
#include <cstring>
int Elements::getSize()  {
    return size;
}

void Elements::setSize(int size) {
    this->size = size;
}

int Elements::getEffect()  {
    return effect;
}

void Elements::setEffect(int effect) {
    this->effect = effect;
}

Elements::Elements(int size) {
    this->size = size;
    this->effect = 0;
}

Elements::Elements() {
    this->size = 0;
    this->effect = 0;
}

void  Elements ::setChar(char *name) {
    strcpy(this->character, name);
}

 char *Elements::getCharacter()
{
    return character;
}
int Elements::incersescore() {
    return 0;
}

int Elements::diceeffect(int i) {
    return 0;
}