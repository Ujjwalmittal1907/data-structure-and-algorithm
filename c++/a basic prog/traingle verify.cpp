#include<iostream>
using namespace std;
int main ()
{
    cout << "enter the sides of traingle";
    int a,b,c;
    cin >> a >> b >> c;
    if (a+b>c && a+c>b && b+c>a){
        cout << "it is a traingle";
    }
    else{cout << "it is not traingle";}
    return 0;
}