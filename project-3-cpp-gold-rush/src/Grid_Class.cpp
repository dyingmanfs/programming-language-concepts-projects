#include "Grid_Class.h"
#include "Wild.h"
#include "Bear.h"
#include "Wood.h"
#include "Gold.h"
#include "MedicalSupplies.h"
#include "wolf.h"
#include "Food.h"
//We wrote this code together
//If Code  doesn't put, can you again it.
using namespace std;
Grid_Class::Grid_Class(){
    number=0;
    srand(time(0));
    bear  = new Elements **[number];
    for (int i = 0; i < number; ++i) {
        *bear[i] = new Elements[number];

    }
    for (int i = 0; i < number; ++i) {
        for (int j = 0; j < number; ++j) {
            bear[i][j]->setChar("X");
        }
    }


}
Grid_Class::Grid_Class(int x){

    this->number=x;
    srand(time(0));
    bear  = new Elements **[number];


    for (int i = 0; i < number; ++i) {
        bear[i] = new Elements *[number];

    }


    for (int i = 0; i < number; ++i) {
        for (int j = 0; j < number; ++j) {
            bear[i][j] = new Elements(number);
            bear[i][j]->setChar("X");
        }
    }

}
void Grid_Class:: deploy_elements(){
    int x;
    x=2*((number*number)/25);
    for (int i = 0; i < (x/2); ++i) {

        bear3();
    }
    for (int i = 0; i < x; ++i) {

        wood1();
    }

    for (int i = 0; i < x; ++i) {

        Medical();
    }
    for (int i = 0; i < x; ++i) {

        wolf();
    }
    for (int i = 0; i < x; ++i) {
        Food1();
    }
    for (int i = 0; i < x; ++i) {

        Gold2();
    }
    for (int i = 0; i < number; ++i) {
        for (int j = 0; j < number; ++j) {
            std::cout << bear[i][j]->getCharacter() << ' ';
        }
        std::cout << std::endl;
    }
};
void Grid_Class::bear3() {
    int check = 0;
    //  int check checks whether there is a crash situation.
    while (check == 0) {
        int type;

        type = 1 + (rand() % 4);

        // type == 1 is vertically
        if (type == 1) {


            int x;
            int y;


            x = 1 + (rand() % number - 1);
            y = 1 + (rand() % number - 1);

            if (x > number - 3) {
                if (*(bear[x][y]->getCharacter()) != 'X') {
                    check = 0;
                } else if (*(bear[x - 1][y]->getCharacter()) != 'X') {
                    check = 0;
                } else if (*(bear[x - 2][y]->getCharacter()) != 'X') {
                    check = 0;
                } else{
                    check=1;
                    bear[x][y] = new Bear(number);
                    for (int i = 0; i < 2; ++i) {

                        x = x - 1;
                        bear[x][y] = new Bear(number);;


                    }

                }


            }

            else {
                if (*(bear[x][y]->getCharacter()) != 'X') {
                    check = 0;
                } else if (*(bear[x + 1][y]->getCharacter()) != 'X') {
                    check = 0;
                } else if (*(bear[x + 2][y]->getCharacter()) != 'X') {
                    check = 0;

                }
                else{
                    check=1;
                    bear[x][y] = new Bear(number);
                    for (int i = 0; i < 2; ++i) {
                        x = x + 1;
                        bear[x][y] = new Bear(number);


                    }
                }

            }




            //type == 2 is horizontally
        } else if (type == 2) {

            int x;
            int y;
            x = 1 + (rand() % number - 1);
            y = 1 + (rand() % number - 1);

            if (y > number - 3) {

                if (*(bear[x][y]->getCharacter()) != 'X') {
                    check = 0;
                } else if (*(bear[x][y - 1]->getCharacter()) != 'X') {
                    check = 0;
                } else if (*(bear[x][y - 1]->getCharacter()) != 'X') {
                    check = 0;

                }
                else{
                    check=1;
                    bear[x][y] = new Bear(number);
                    for (int i = 0; i < 2; ++i) {
                        y = y - 1;
                        bear[x][y] = new Bear(number);



                    }
                }



            } else {

                if (*(bear[x][y]->getCharacter()) != 'X') {
                    check = 0;
                } else if (*(bear[x][y + 1]->getCharacter()) != 'X') {
                    check = 0;
                } else if (*(bear[x][y + 2]->getCharacter()) != 'X') {
                    check = 0;
                }
                else{
                    check=1;
                    bear[x][y] = new Bear(number);
                    for (int i = 0; i < 2; ++i) {
                        y = y + 1;
                        bear[x][y] = new Bear(number);


                    }
                }

            }



            // type 3 is horizontally
        } else if (type == 3) {
            int a = 0;
            while (a == 0) {

                int x;
                int y;
                x = 1 + (rand() % number - 1);
                y = 1 + (rand() % number - 1);
                if ((x == 0 && y == 0) || (x == 1 && y == 0) || (x == 0 && y == 1) ||
                    (x == number - 1 && y == number - 1) || (x == number - 1 && y == number - 2) ||
                    (x == number - 2 && y == number - 1)) {
                    a = 0;
                } else {

                    if (x == 1 && y == 1) {
                        if(*(bear[x][y]->getCharacter()) != 'X'){
                            check=0;
                        }
                        else if(*(bear[x-1][y+1]->getCharacter()) != 'X'){
                            check=0;
                        }
                        else if (*(bear[x+1][y-1]->getCharacter()) != 'X'){
                            check=0;
                        } else{
                            check=1;
                            bear[x][y] = new Bear(number);

                            int x1;
                            int y1;
                            y1 = y + 1;
                            x1 = x - 1;
                            bear[x1][y1] = new Bear(number);
                            int x2;
                            int y2;
                            y2 = y - 1;
                            x2 = x + 1;
                            bear[x2][y2] = new Bear(number);}


                    } else if (x == number - 2 && y == number - 2) {
                        if(*(bear[x][y]->getCharacter()) != 'X'){
                            check=0;
                        }
                        else if(*(bear[x-1][y+1]->getCharacter()) != 'X'){
                            check=0;
                        }
                        else if (*(bear[x+1][y-1]->getCharacter()) != 'X'){
                            check=0;
                        }
                        else{
                            check=1;


                            bear[x][y] = new Bear(number);

                            int x1;
                            int y1;
                            y1 = y + 1;
                            x1 = x - 1;
                            bear[x1][y1] = new Bear(number);
                            int x2;
                            int y2;
                            y2 = y - 1;
                            x2 = x + 1;
                            bear[x2][y2] = new Bear(number);}


                    } else if (y == 0 || y == 1) {
                        if(*(bear[x][y]->getCharacter()) != 'X'){
                            check=0;
                        }
                        else if(*(bear[x-1][y+1]->getCharacter()) != 'X'){
                            check=0;
                        }
                        else if (*(bear[x-2][y+2]->getCharacter()) != 'X'){
                            check=0;
                        } else{
                            check=1;
                            bear[x][y] = new Bear(number);
                            for (int i = 0; i < 2; ++i) {
                                x = x - 1;
                                y = y + 1;
                                bear[x][y] = new Bear(number);


                            }}

                    } else {
                        if(*(bear[x][y]->getCharacter()) != 'X'){
                            check=0;
                        }
                        else if(*(bear[x+1][y-1]->getCharacter()) != 'X'){
                            check=0;
                        }
                        else if (*(bear[x+2][y-2]->getCharacter()) != 'X'){
                            check=0;
                        }
                        else{
                            check=1;
                            bear[x][y] = new Bear(number);
                            for (int i = 0; i < 2; ++i) {
                                x = x + 1;
                                y = y - 1;
                                bear[x][y] = new Bear(number);


                            }}
                    }
                    a = 1;
                }


            }
            //type 4 is diagonally
        } else if (type == 4) {
            int a = 0;
            // int a is When impossible situations arise, values for X and Y are taken again.
            while (a == 0) {

                int x;
                int y;
                x = 1 + (rand() % number - 1);
                y = 1 + (rand() % number - 1);
                if ((x == 0 && y == number - 1) || (x == 0 && y == number - 2) || (x == 1 && y == number - 1) ||
                    (x == number - 1 && y == 0) || (x == number - 2 && y == 0) || (x == number - 1 && y == 1)) {
                    a = 0;
                } else {
                    if (x == number - 2 && y == 1) {
                        if(*(bear[x][y]->getCharacter()) != 'X'){
                            check=0;
                        }
                        else if(*(bear[x-1][y-1]->getCharacter()) != 'X'){
                            check=0;
                        }
                        else if (*(bear[x+1][y+1]->getCharacter()) != 'X'){
                            check=0;
                        }
                        else{
                            check=0;

                            bear[x][y] = new Bear(number);

                            int x1;
                            int y1;
                            y1 = y - 1;
                            x1 = x - 1;
                            bear[x1][y1] = new Bear(number);
                            int x2;
                            int y2;
                            y2 = y + 1;
                            x2 = x + 1;
                            bear[x2][y2] = new Bear(number);}


                    } else if (x == number - 2 && y == number - 2) {
                        if(*(bear[x][y]->getCharacter()) != 'X'){
                            check=0;
                        }
                        else if(*(bear[x-1][y-1]->getCharacter()) != 'X'){
                            check=0;
                        }
                        else if (*(bear[x+1][y-1]->getCharacter()) != 'X'){
                            check=0;
                        }
                        else{
                            check=0;


                            bear[x][y] = new Bear(number);

                            int x1;
                            int y1;
                            y1 = y - 1;
                            x1 = x - 1;
                            bear[x1][y1] = new Bear(number);
                            int x2;
                            int y2;
                            y2 = y + 1;
                            x2 = x + 1;
                            bear[x2][y2] = new Bear(number);}


                    } else if (x == number - 1 || y == number - 1) {
                        if(*(bear[x][y]->getCharacter()) != 'X'){
                            check=0;
                        }
                        else if(*(bear[x-1][y-1]->getCharacter()) != 'X'){
                            check=0;
                        }
                        else if (*(bear[x-2][y-2]->getCharacter()) != 'X'){
                            check=0;
                        }
                        else{
                            check=1;

                            bear[x][y] = new Bear(number);;
                            for (int i = 0; i < 2; ++i) {
                                x = x - 1;
                                y = y - 1;
                                bear[x][y] = new Bear(number);


                            }}

                    } else {

                        if(*(bear[x][y]->getCharacter()) != 'X'){
                            check=0;
                        }
                        else if(*(bear[x+1][y+1]->getCharacter()) != 'X'){
                            check=0;
                        }
                        else if (*(bear[x+2][y+2]->getCharacter()) != 'X'){
                            check=0;
                        }
                        else{check=1;

                            bear[x][y] = new Bear(number);
                            for (int i = 0; i < 2; ++i) {
                                x = x + 1;
                                y = y + 1;
                                bear[x][y] = new Bear(number);


                            }}
                    }
                    a = 1;
                }


            }
        }



    }
}
void Grid_Class::wood1() {

    int check=1;
    while (check==1){

        int type;
        type = 1+ (rand() % 4);

        if(type==1){
            int x;
            int y;


            x=1+ (rand() % number-1);
            y=1+ (rand() % number-1);

            if(x>number-2){


                if(*(bear[x][y]->getCharacter()) != 'X'){
                    check=1;
                }
                else if(*(bear[x-1][y]->getCharacter()) != 'X'){
                    check=1;
                } else{
                    check=0;


                    bear[x][y]= new Wood (number);
                    for (int i = 0; i < 1; ++i) {
                        x=x-1;
                        bear[x][y]=new Wood (number);


                    }}





            }

            else{
                if(*(bear[x][y]->getCharacter()) != 'X'){
                    check=1;
                }
                else if(*(bear[x+1][y]->getCharacter()) != 'X'){
                    check=1;
                }
                else{
                    check=0;
                    bear[x][y]=new Wood (number);
                    for (int i = 0; i < 1; ++i) {
                        x=x+1;
                        bear[x][y]=new Wood (number);


                    }}
            }
        }
        else if (type == 2) {
            int x, y;
            x = 1 + (rand() % (number - 1));
            y = 1 + (rand() % (number - 1));


            if (y > number - 2) {
                if (*(bear[x][y]->getCharacter()) != 'X') {
                    check = 0;
                } else if (*(bear[x][y - 1]->getCharacter()) != 'X') {
                    check = 1;
                } else {
                    check = 0;
                    bear[x][y] = new Wood(number);
                    for (int i = 0; i < 1; ++i) {
                        y = y - 1;

                        bear[x][y] = new Wood(number);

                    }
                }
            } else {
                if (*(bear[x][y]->getCharacter()) != 'X') {
                    check = 1;
                } else if (*(bear[x][y - 1]->getCharacter()) != 'X') {
                    check = 1;
                } else {
                    check = 0;
                    bear[x][y] = new Wood(number);
                    for (int i = 0; i < 1; ++i) {
                        y = y + 1;

                        bear[x][y] = new Wood(number);

                    }
                }
            }

        }
        else if (type == 3) {
            int a = 0;
            while (a == 0) {
                int x, y;
                x = 1 + (rand() % (number - 2));
                y = 1 + (rand() % (number - 2));

                if ((x == 0 && y == 0) || (x == number - 1 && y == number - 1)) {
                    a = 0;
                } else {
                    if (x == 1 && y == 0) {
                        if (*(bear[x][y]->getCharacter()) != 'X') {
                            check = 1;
                        } else if (*(bear[x-1][y+1]->getCharacter()) != 'X') {
                            check = 1;
                        } else {
                            check = 0;
                            bear[x][y] = new Wood(number);

                            int x1 = x - 1;
                            int y1 = y + 1;
                            bear[x1][y1] = new Wood(number);
                        }
                    } else if (x == number - 2 && y == number - 2) {
                        if (*(bear[x][y]->getCharacter()) != 'X') {
                            check = 0;
                        } else if (*(bear[x-1][y+1]->getCharacter()) != 'X') {
                            check = 1;
                        } else {
                            check = 0;
                            bear[x][y] = new Wood(number);

                            int x1 = x - 1;
                            int y1 = y + 1;
                            bear[x1][y1] = new Wood(number);
                        }
                    } else if (y == 0) {
                        if (*(bear[x][y]->getCharacter()) != 'X') {
                            check = 1;
                        } else if (*(bear[x-1][y+1]->getCharacter()) != 'X') {
                            check = 1;
                        } else {
                            check = 0;
                            bear[x][y] = new Wood(number);
                            for (int i = 0; i < 1; ++i) {
                                x = x - 1;
                                y = y + 1;
                                bear[x][y] = new Wood(number);
                            }
                        }
                    } else {
                        if (*(bear[x][y]->getCharacter()) != 'X') {
                            check = 1;
                        } else if (*(bear[x+1][y-1]->getCharacter()) != 'X') {
                            check = 1;
                        } else {
                            check = 0;
                            bear[x][y] = new Wood(number);
                            for (int i = 0; i < 1; ++i) {
                                x = x + 1;
                                y = y - 1;
                                bear[x][y] = new Wood(number);
                            }
                        }
                    }
                    a = 1;
                }
            }
        }
        else{
            int a=0;
            while (a==0){

                int x;
                int y;
                x=1+ (rand() % number-1);
                y=1+ (rand() % number-1);
                if((x== 0 &&y==number-1)||(x== number - 1 && y == 0)){
                    a=0;
                } else{

                    if(x==number -2 && y==1){
                        if(*(bear[x][y]->getCharacter()) != 'X'){
                            check=1;
                        }
                        else if(*(bear[x+1][y+1]->getCharacter()) != 'X'){
                            check=1;
                        } else{
                            check=0;
                            bear[x][y]=new Wood (number);

                            int x1;
                            int y1;
                            y1=y+1;
                            x1=x+1;
                            bear[x1][y1]=new Wood (number);}




                    } else  if(x== 0 && y==number-1){
                        if(*(bear[x][y]->getCharacter()) != 'X'){
                            check=1;
                        }
                        else if(*(bear[x+1][y+1]->getCharacter()) != 'X'){
                            check=1;
                        } else{
                            check=0;

                            bear[x][y]=new Wood (number);

                            int x1;
                            int y1;
                            y1=y+1;
                            x1=x+1;
                            bear[x1][y1]=new Wood (number);}



                    }
                    else if(x==number-1||y==number - 1){

                        if(*(bear[x][y]->getCharacter()) != 'X'){
                            check=1;
                        }
                        else if(*(bear[x-1][y-1]->getCharacter()) != 'X'){
                            check=1;
                        } else{
                            check=0;


                            bear[x][y]=new Wood (number);
                            for (int i = 0; i < 1; ++i) {
                                x=x-1;
                                y=y-1;
                                bear[x][y]=new Wood (number);


                            }}

                    }
                    else{

                        if(*(bear[x][y]->getCharacter()) != 'X'){
                            check=1;
                        }
                        else if(*(bear[x+1][y+1]->getCharacter()) != 'X'){
                            check=1;
                        } else{
                            check=0;


                            bear[x][y]=new Wood (number);
                            for (int i = 0; i < 1; ++i) {
                                x=x+1;
                                y=y+1;
                                bear[x][y]=new Wood (number);


                            }}
                    }
                    a=1;
                }


            }
        }
    }
}
void  Grid_Class::Gold2() {
    int check=1;
    while (check==1){

        int x;
        int y;

        x=1+ (rand() % number-1);
        y=1+ (rand() % number-1);
        if(*(bear[x][y]->getCharacter()) != 'X'){
            check=1;
        } else{ check=0;

            bear[x][y]= new Gold (number);}}

}
void Grid_Class::Medical(){
    int check=1;
    while (check==1){
        int x;
        int y;
        x=1+ (rand() % number-1);
        y=1+ (rand() % number-1);
        if(*(bear[x][y]->getCharacter()) != 'X'){
            check=1;
        } else{ check=0;
            bear[x][y]=new MedicalSupplies(number);}}
}
void Grid_Class::wolf() {
    int check=1;
    while (check==1){
        int x;
        int y;
        x=1+ (rand() % number-1);
        y=1+ (rand() % number-1);
        if(*(bear[x][y]->getCharacter()) != 'X'){
            check=1;
        } else{ check=0;
            bear[x][y]=new Wolf (number);}}
}
void Grid_Class::Food1(){
    int check=1;
    while (check==1){
        int x;
        int y;
        x=1+ (rand() % number-1);
        y=1+ (rand() % number-1);
        if(*(bear[x][y]->getCharacter()) != 'X'){
            check=1;
        } else{ check=0;
            bear[x][y]=new Food (number);}}
}
char* Grid_Class::show(int x, int y) {

    return bear[x][y]->getCharacter();

}

Elements *Grid_Class::getTable(int x, int y)  {
    return bear[x][y];
}


