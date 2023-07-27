#include<iostream>
using namespace std;

int glob=10;
void sum()
{
    int a;
    cout << glob;
}
int main(){

int glob=12;

cout << "lacal variable = " << glob << endl;
cout << "global variable= "<< ::glob << endl;
cout << glob++ << endl;
cout << glob;
cout << ++glob << endl;
cout << glob-- << endl;
cout << --glob<< endl;
}