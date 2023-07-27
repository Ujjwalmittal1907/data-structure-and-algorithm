#include<iostream>
using namespace std;
int main()
{  // for reversing the order as well as seperating digits of a number
 int num ;
 cout << "enter the number:-" ;
 cin >> num ;
 while (num>0){
 int digit ;
 digit=num%10 ;
 cout << digit ;
 num/=10 ;
 
}                // if endl input removes from while loop it will reverse the no.

 return 0;
}