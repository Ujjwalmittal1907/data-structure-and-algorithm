#include<iostream>
using namespace std;

class Box{
private:
double width;
public:
friend void printwidth(Box box);
friend int doublewidth(Box box);
void setwidth(double wid);

};

void Box:: setwidth(double wid){
    width = wid;}
void printwidth(Box box){
    cout << box.width;
}

int doublewidth(Box box){
    return 2* box.width ;
}


int main(){

Box box;
box.setwidth(14);
printwidth(box);
cout << endl <<  doublewidth(box) << endl;

}