#include<iostream>
using  namespace std;

int addition( int p, int q){
    int sum = p+q;
cout << "the sum :-" << sum ;
}

int main (){
int p,q ;
cout << "enter the 1st no.";
cin >> p;
cout << "enter the 2nd no.";
cin >> q;
addition (p,q) ;
 return 0;

}