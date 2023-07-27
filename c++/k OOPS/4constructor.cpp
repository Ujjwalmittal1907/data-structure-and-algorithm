// here mainly we have content about "this" as well as "copy" constructor
/*
#include <iostream>
using namespace std;	

class hero {
char level;
int  health;

public:
hero (char level , int health){
    this-> level=level;                // this keyword is used here as when both varible are same 
    this->health=health;               // here this-> indicates to our main level/health means hamara 
}                         // created hero ki health and level hum main hero mai dal rahe

void print (){
    cout << "health" << this->health << endl;
    cout << "level" <<   this->level << endl;
}
int gethealth(){
    return health;
}
char getlevel(){
    return level;
}

};



int main()
{
    hero ujjwal('f',20);
    ujjwal.print();                                  output:-  f
                                                              20
    return 0;
}
*/
// for above code one more example
#include <iostream>
using namespace std;

class student {
public:
string name;
int rollno;
int city;

student(string name,int rollno,int citycode){
    this->name = name;
    this -> rollno= rollno;
    this-> city = citycode;
}

void print(){
    cout << "name " << name << endl;
    cout << "rollno" << rollno << endl;
    cout << "city" << city << endl;
}

};
int main()
{
  student a ('ugg',12,97);
  student b('t',15,52);
  a.print ();  
  b.print ();  
    return 0;
}