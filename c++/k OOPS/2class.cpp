// concept of static and dinamic mem ory allocation of objects

#include <iostream>
using namespace std;	

class hero{

int health;
char level;
public:

int gethealth(){
    return health;
}
void sethealth(int h){
    health=h;
}

char getlevel(){
    return  level;
}

void setlevel(char a){
    level=a;

}

};

int main()
{    
    // static memory allocation is used here ..
    hero ujjwal;

    ujjwal.sethealth(80);
    cout << "health of hero " << ujjwal.gethealth() << endl;

    ujjwal.setlevel('j'); 
    cout << "level of hero  " << ujjwal.getlevel() << endl;


    // dynamic memory allocation

    hero *b= new hero ;
    (*b).sethealth(120);
    (*b).setlevel('c');
    cout << "level of next_hero " << (*b).getlevel() << endl;
    cout << "health of next_hero " << (*b).gethealth() << endl;    // (*b)  can be represented as ->b

    cout << "level of next_hero " << b->getlevel() << endl;
    cout << "health of next_hero " << b->gethealth() << endl;

   hero *c= new hero;
   (*c).setlevel('f');
   cout << "level of next_hero(2) " << (*c).getlevel() << endl;
    return 0;
}