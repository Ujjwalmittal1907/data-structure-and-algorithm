#include<iostream>
using namespace std;
class vehicles{
    public:
    int max_speed;
    int No_tyres;
    char fuel;
};

class car : public vehicles{
    public:
    char color;
    char seater;
};


class mahindra : public car{
public :
 double model;
};
int main(){


car balero;
 cout << "ok" << balero.color;
 cout << "bye " << balero.fuel;

 class mahindra scorpio;
cout << scorpio.seater;

}