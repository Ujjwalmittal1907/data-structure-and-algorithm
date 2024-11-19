#include<iostream>
using namespace std;

class hero{
 public :
 int health;
 int level;

 hero(int health){
    this -> health = health;
 }

 hero(int health , int level){
    this -> health = health;
    this -> level = level;
}

// copy constructor
hero(hero& temp){
    cout << "inside the copy constructor" << endl;
    this -> health = temp.health;
    this -> level = temp.level;
}
void print(){
    cout << this -> health << endl;
    cout << this -> level << endl;
}



};
int main(){
    hero ramesh(50,60);
    ramesh.print() ;

    // making copy constructor of ramesh
    cout << "copy constructor" << endl;
    hero himesh(ramesh);
    himesh.print();
    cout << endl << endl;
    cout << "lets see the shallow copy ," << endl;
    cout << "for ramesh " << endl;
    ramesh.health = 100;
    ramesh.print();
    cout << "for himesh" << endl;
    himesh.print();

    // copy assignment 
    cout << endl << endl;
    cout << "copy assignment";
    ramesh = himesh;
    ramesh.print();
    himesh.print();
    // ramesh ke andar himesh ke saari values aa jaayegi and ramesh ki values gayab ho jaayegi.

    }



    // important concept 
    // in copy constructor there is shallow copy it means the himesh in above example is point to same memory.
    // it means memory is 1 but represented by two name himesh and ramesh.



    

 