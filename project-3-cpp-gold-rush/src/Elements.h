//
// Created by Furkan on 5/21/2024.
//

#ifndef AS3_ELEMENTS_H
#define AS3_ELEMENTS_H


class Elements {
public:
    Elements(int size);
    Elements();

    int getSize() ;

    void setSize(int size);

    virtual int getEffect() ;

    void setEffect(int effect);
    void setChar(char *name);
    virtual int incersescore();//I used virtual   to acces incersescore
    virtual int diceeffect(int i);// I used to virtual acces diceeffect

     char *getCharacter() ;


protected:// I made protected because  to accses in the  other class
int size;
int effect;
char character[10];
};


#endif //AS3_ELEMENTS_H
