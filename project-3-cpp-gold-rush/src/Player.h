//
// Created by Furkan on 5/23/2024.
//

#ifndef AS3_PLAYER_H
#define AS3_PLAYER_H


class Player {
public:
    Player();

    Player(int playerhaeth);

    int getPlayerhaeth() ;

    void setPlayerhaeth(int playerhaeth);

    int getPoint() ;

    void setPoint(int point);

    void increasegrathed(int i);
    void increasepoint(int i);
    void increasehel(int i);

    void bonus(int i);


private:
    int playerhaeth;
    int grathed[5];
    int point;
    int goldcounter;
    int woodcounter;
};


#endif //AS3_PLAYER_H
