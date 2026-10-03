#include <iostream>
#include "Wild.h"
#include "Grid_Class.h"
#include "Player.h"
#include "Elements.h"
#include "Bear.h"
#include "Wood.h"
#include <cstring>
/* Furkan Sağlam – 2526630, Fatih  Sağlam – 2526622
We read and accept the submission rules and the extra rules specified in each question. This is
our own work that is done by us only */
// We are twins, and we stay in the same room. Therefore, we coded it together.
int main() {
    int randomnumber;
    char ***table;
    cout<<"Welcome to game "<<endl;
    cout<<"Please enter the size"<<endl;
    int size,x,y;
    int cntrl=1;
    while (cntrl){
    cin>>size;
    if(size<5){
        cout<<"Wrong size"<<endl;
    }
    else {
        cntrl = 0;
    }
    }
    table = new char**[size];
    for(int i = 0; i < size; ++i) {
        table[i] = new char*[size];
        for (int j = 0; j < size; ++j) {
            table[i][j] = new char[10];
        }}
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {

            strcpy(table [i] [j],"?" );
        }
    }
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << table[i][j] << " ";
        }
        std::cout << std::endl;
    }

    Player P1(size);
    Player P2(size);
    srand(time(NULL));
    int num = size*size;
    Grid_Class S1(size);
    S1.deploy_elements();
    randomnumber  =  (rand() % (num - 20 + 1)) + 20;
    for (int i = 0; i < randomnumber; ++i) {

        if(P1.getPlayerhaeth()>0) {
            int control = 0;
            while (control == 0) {
                cout << "Player 1" << endl;
                cout << "Choose X " << endl;
                cin >> x;
                cout << "Choose Y " << endl;
                cin >> y;
                if (strcmp(table[x][y], "?") == 0) {
                    control = 1;
                } else {
                    cout<<"It is opened. Please choose another point"<<endl;
                    control = 0;
                }
            }


            strcpy(table[x][y], S1.show(x, y));
            for (int a = 0; a < size; ++a) {
                for (int j = 0; j < size; ++j) {
                    std::cout << table[a][j] << " ";
                }
                std::cout << std::endl;
            }
            if (strcmp(S1.getTable(x, y)->getCharacter(), "X") == 0) {
                cout << "Player 1 didn't find anything" << endl;
            }

            if (strcmp(S1.getTable(x, y)->getCharacter(), "F") == 0) {
                cout << "Player 1 find the food" << endl;
                P1.increasehel(S1.getTable(x, y)->getEffect());
                P1.increasegrathed(0);
            }
            if (strcmp(S1.getTable(x, y)->getCharacter(), "G") == 0) {
                cout << "Player 1 find the gold" << endl;
                P1.increasepoint(S1.getTable(x, y)->incersescore());
            }
            if (strcmp(S1.getTable(x, y)->getCharacter(), "S") == 0) {
                cout << "Player 1 find the wood" << endl;
                P1.increasehel(S1.getTable(x, y)->getEffect());
                P1.increasegrathed(2);
            }
            if (strcmp(S1.getTable(x, y)->getCharacter(), "I") == 0) {
                cout << "Player 2 find the Medical Supplies" << endl;
                P1.increasehel(S1.getTable(x, y)->getEffect());
                P1.increasegrathed(3);
            }
            if (strcmp(S1.getTable(x, y)->getCharacter(), "W") == 0) {
                cout << "You find a wolf" << endl;
                cout
                        << "  You should predict whether the dice will land on an odd or even number. If odd, 1; if even, 2"
                        << endl;
                int choose;
                cin >> choose;
                if (choose == 1) {
                    int dice = S1.getTable(x, y)->diceeffect(1);
                    P1.increasehel(dice);
                }
                if (choose == 2) {
                    int dice = S1.getTable(x, y)->diceeffect(2);
                    P1.increasehel(dice);
                }

            }
            if (strcmp(S1.getTable(x, y)->getCharacter(), "B") == 0) {
                cout << "You find a bear" << endl;
                cout
                        << "  You should predict whether the dice will land on an odd or even number. If odd, 1; if even, 2"
                        << endl;
                int choose;
                cin >> choose;
                if (choose == 1) {
                    int dice = S1.getTable(x, y)->diceeffect(1);
                    P1.increasehel(dice);
                }
                if (choose == 2) {
                    int dice = S1.getTable(x, y)->diceeffect(2);
                    P1.increasehel(dice);
                }

            }
        }

        i++;
        if (P2.getPlayerhaeth()>0){
        int control2 = 0;
        while(control2==0) {
            cout << "Player 2" << endl;
            cout << "Choose X " << endl;
            cin >> x;
            cout << "Choose Y " << endl;
            cin>>y;
            if(strcmp(table[x][y],"?")==0){
                control2=1;
            }
            else{
                cout<<"It is opened. Please choose another point"<<endl;

                control2=0;
            }
        }
        strcpy(table[x][y],S1.show(x,y));


        for (int a = 0; a < size; ++a) {
            for (int j = 0; j < size; ++j) {
                std::cout << table[a][j] << " ";
            }
            std::cout << std::endl;
        }
        if(strcmp(S1.getTable(x,y)->getCharacter(),"F")==0){
            cout<<"Player 2 find the food"<<endl;
            P2.increasehel(S1.getTable(x,y)->getEffect());
            P2.increasegrathed(0);
        }
        if(strcmp(S1.getTable(x,y)->getCharacter(),"X")==0){
            cout<<"Player 2 didn't find anything"<<endl;
        }
        if(strcmp(S1.getTable(x,y)->getCharacter(),"G")==0){
            cout<<"Player 2 find the gold"<<endl;
            P2.increasepoint(S1.getTable(x,y)->incersescore());
        }
        if(strcmp(S1.getTable(x,y)->getCharacter(),"I")==0){
            cout<<"Player 2 find the wood"<<endl;
            P2.increasehel(S1.getTable(x,y)->getEffect());
            P2.increasegrathed(2);
        }
        if(strcmp(S1.getTable(x,y)->getCharacter(),"S")==0){
            cout<<"Player 2 find the Medical Supplies"<<endl;
            P2.increasehel(S1.getTable(x,y)->getEffect());
            P2.increasegrathed(3);
        }
        if(strcmp(S1.getTable(x,y)->getCharacter(),"W")==0){
            cout<< "You find a wolf" <<endl;
            cout<<"  You should predict whether the dice will land on an odd or even number. If odd, 1; if even, 2"<<endl;
            int choose;
            cin>>choose;
            if(choose == 1){
                int dice = S1.getTable(x,y)->diceeffect(1);
                P2.increasehel(dice);
            }
            if(choose == 2){
                int dice = S1.getTable(x,y)->diceeffect(2);
                P2.increasehel(dice);
            }

        }
        if(strcmp(S1.getTable(x,y)->getCharacter(),"B")==0){
            cout<< "You find a bear" <<endl;
            cout<<"  You should predict whether the dice will land on an odd or even number. If odd, 1; if even, 2"<<endl;
            int choose;
            cin>>choose;
            if(choose == 1){
                int dice = S1.getTable(x,y)->diceeffect(1);
                P2.increasehel(dice);
            }
            if(choose == 2){
                int dice = S1.getTable(x,y)->diceeffect(2);
                P2.increasehel(dice);
            }


        }}

        cout<<"Player 1's point is "<<P1.getPoint()<<endl;
        cout<<"Player 2's point is "<<P2.getPoint()<<endl;
    }
    if(P1.getPoint()>P2.getPoint()){
        cout<<"Player 1 won"<<endl;
    }
    else if (P1.getPoint()<P2.getPoint()){
        cout<<"Player 2 won"<<endl;

     }
    else
    {
        cout<<"There is no winner "<<endl;
    }







    return 0;
}
