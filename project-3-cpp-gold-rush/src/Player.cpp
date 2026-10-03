//
// Created by Furkan on 5/23/2024.
//

#include "Player.h"
#include<iostream>
using namespace std;
Player::Player() {
    playerhaeth = 0;
    point = 0;
    for (int i = 0; i < 5; ++i) {
        grathed[i]=0;
    }
}

Player::Player(int playerhaeth) {
    this->playerhaeth = 2*playerhaeth;
    this->point =0;
    this->goldcounter = 0;
    this->woodcounter = 0;
    for (int i = 0; i < 5; ++i) {
        grathed[i]=0;
    }
}

int Player::getPlayerhaeth()  {
    return playerhaeth;
}

void Player::setPlayerhaeth(int playerhaeth) {
    this->playerhaeth = playerhaeth;
}

int Player::getPoint()  {
    return point;
}

void Player::setPoint(int point) {
    this->point = point;
}

void Player::increasegrathed(int i) {
    if(i==0){
        grathed[i]++;
        cout << "Number of foods are "<<grathed[i]<<endl;
    }
    else if(i==1){
        grathed[i]++;
        goldcounter ++;
        cout << "Number of golds are "<<grathed[1]<<endl;
        if(goldcounter==3){
            bonus(1);
        }


    } else if(i==2){
        grathed[i]++;
        woodcounter ++;
        cout << "Number of woods are "<<grathed[2]<<endl;
        if(woodcounter==2){
            bonus(1);
        }
    }

}
void Player::increasepoint(int i) {
    point = point + i;
    cout<<"Point is "<< point <<endl;
    increasegrathed(1);
}
void Player::increasehel(int i) {
    this->playerhaeth = this->playerhaeth + i;
    cout<<"Player's new health  "<<this->playerhaeth<<endl;
}
void Player::bonus(int i) {
if(i==1){
    this->playerhaeth = grathed[i]/4 + playerhaeth ;
    cout<<"You win a bonus health "<<endl;
    goldcounter = 0;
}
if(i==2){
    this->playerhaeth = grathed[2]/8 + playerhaeth ;
    cout<<"You win a bonus health "<<endl;
    woodcounter = 0;
}
}
