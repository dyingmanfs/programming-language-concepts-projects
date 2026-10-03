#include <iostream>
#include "Room.h"
#include "Classroom.h"
#include "Office.h"
#include "Building.h"
#include "University.h"

/* Furkan Sağlam – 2526630
I read and accept the submission rules and the extra rules specified in each
question. This is my own work that is done by myself only */

using namespace std;
int main() {


   int control=1;
   int menu;
    University metu("METU NCC");
    while (control !=0){

       cout<<"[1] Add a new building to the university\n"
             "[2] Add a new room to a selected building\n"
             "[3] Print the buildings in the university\n"
             "[4] Print the rooms in each building in the university\n"
             "[5] Print the rooms in each building in the university based on type\n"
             "[6] Print the total number of classrooms and offices in the university\n"
             "[7] Print the available offices in each building in the university\n"
             "[8] Print the total capacity of all the offices\n"
             "[9] Print the suitable classrooms in the university based on the given number \n"
             "of students\n"
             "[0] Exit"<<endl;
       cin>>menu;
       if (menu==1){
           char namebuilding[100];
           int numbersize;
           cout<< "Please enter your choice: 1 "<<endl;
           cout<<"Please enter name of building:"<<endl;
           cin>>namebuilding;
           cout<<"Please enter size of building:"<<endl;
           cin>>numbersize;
           metu.addBuilding(namebuilding,numbersize);

       }
       else if (menu==2){
           cout<< "Please enter your choice: 2 "<<endl;
           metu.printBuildings();


           cout<<"Please enter the number of building to which the room should be added:"<<endl;
           int choose2;
           cin>>choose2;
           cout<<"Please enter the type of room(1: Classroom/ 2: Office):  "<<endl;
           int type;
           cin>>type;
           if(type==2){
           cout<<"Please enter the name of the new room:  "<<endl;
           char nameroom[100];
           cin>>nameroom;
           cout<<"Please enter the floor number of the new room: "<<endl;
           int floor;
           cin>>floor;
           cout<<"[1] Coordinator Office\n"
                 "[2] Standard Office\n"
                 "[3] Shared Office for 2 people\n"
                 "[4] Shared Office for 3 people\n"
                 "[5] Shared Office for 10 people"<<endl;
           cout<<"Please enter type of office: "<<endl;
           office office1;
           int officetype;
           cin>>officetype;


           if(officetype==1){
               office1 =CoordinatorOffice;
           }
           if(officetype==2){
               office1 =StandardOffice;
           }
           if(officetype==3){
               office1 =SharedOfficeFor2People;
           }
           if(officetype==4){
               office1 =SharedOfficeFor3People;
           }
           if(officetype==5){
               office1 =SharedOfficeFor10People;
           }
           cout<<"Please enter number of people in the office: "<<endl;
           int numberofperople;
           cin>>numberofperople;
           metu.addroom(choose2,nameroom,floor,office1,numberofperople);

           }
           else if (type==1){
               cout<<"Please enter the name of the new room:  "<<endl;
               char nameroom[100];
               cin>>nameroom;
               cout<<"Please enter the floor number of the new room: "<<endl;
               int floor;
               cin>>floor;
               cout<<"Please enter capacity of classroom:  "<<endl;
               int capaciy;
               cin>>capaciy;
               metu.addroom(choose2,nameroom, floor,  capaciy);

           }




       }
       else if(menu==3){
           cout<< "Please enter your choice: 3"<<endl;
           metu.printBuildings();
       }
       else if(menu==4){
           cout<< "Please enter your choice: 4"<<endl;
           metu.printRooms();
       }
       else if(menu==5){
           cout<< "Please enter your choice: 5"<<endl;
           cout<<"Please enter type of room to display: "<<endl;
           cout<<"[1] Classrooms \n"
                 "[2] Offices "<<endl;
           int type;
           cin>>type;
           metu.printRoomsByType(type);
       }
       else if(menu==6){
           cout<< "Please enter your choice: 6"<<endl;

           metu.printRoomTypeStatistics();
       }
       else if(menu==7){
           cout<< "Please enter your choice: 7"<<endl;

           metu.printAvailableOffices();
       }
       else if(menu==8){
           cout<< "Please enter your choice: 8"<<endl;

           metu.printTotalCapacityOfOffices();
       }
       else if(menu==9){
           cout<< "Please enter your choice: 9"<<endl;

           int student;
           cout<<"Please enter number of students: "<<endl;
           cin>>student;
           metu.printSuitableClassrooms(student);
       }
       else if (menu==0){
           cout<< "Please enter your choice: 0"<<endl;

           cout<<"Thank you for using the university campus management system"<<endl;
           control=0;
       }


   }


    return 0;
}
