//
// Created by Furkan on 5/22/2024.
//
#include "iostream"
#include <time.h>
#include "Wild.h"
#include "cstdlib"
using namespace std;
int Wild::diceeffect(int i) {
    srand(time(NULL));
    effect2 =  (rand() % 6) + 1;// created number for dice effect
    cout<<" effec2 is "<<this->effect2<<endl;
    if(i%2==0){
        if(effect2%2==0){
          cout<<"You are lucky. You didn't take any damage"<<endl;
            return 0;
        }
        else{
            cout<<"Your health decreased "<<endl;
            return effect;
        }

    }
    else{
        if(effect2%2==1){
            return   0;
        }
        else{
            return  effect;
        }
    }


}

Wild::Wild(int size) : Elements(size) {
    effect2 = 0;
}
