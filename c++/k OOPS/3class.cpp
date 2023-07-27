#include <iostream>
using namespace std;

class hero{

    int health;
    char level;

    public:
    gethealth(){
        return health;
    }
                                            // case of defult constructor 
    hero(){
        cout << "default constructor" << endl;
    }


};
int main()
{
    hero a;                                         // yaha pe by default a.hero call hota hai as so we have 
    cout << "health of hero a" << a.gethealth() ;  // constructor as  hero() so when we made a object that call
    cout << "health of hero a" << a.gethealth() ;   // executed main point is that our default constructor die 
                                                   // after we created our constructor and if we then remove
// it it will give us error as dedault constructor is already died and you too have remove shelf made constructor
    return 0;
}