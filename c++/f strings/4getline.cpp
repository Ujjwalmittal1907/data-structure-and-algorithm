#include <iostream>
using namespace std;	
int main()
{
    string name;
    cout << "enter your name";
    getline(cin,name);
    cout << "Hi! " << name << " welcome to the world of coding" ;
    return 0;
}
/* the syntax of getline function is "getline(cin,string_name)" . need is as in cin function we cannot 
input multiple words as after every space there is a terminator that;s why getline function help
to solve problem related to a complete line or multiple words */