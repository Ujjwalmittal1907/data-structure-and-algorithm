#include<iostream>
using namespace std;
int main()
{
  int num1 ,num2 ;
  cout << "enter the 1st number:-";
  cin >> num1 ;
  cout << "enter the second number:-";
  cin >> num2;
  int sum , div , multiply ,modulus ;

  sum = num1 + num2; // for addition operation
  cout << sum << endl ;

  div= num1/num2; // for division operation 
  cout << div << endl ;

  multiply = num1*num2 ;// for multiplying operation
  cout << "multiplicationof given no.:-" << multiply << endl ;

  modulus = num1%num2 ;// for reminder of given no.
  cout << "reminder of given no.-:" << modulus << endl ;
  return 0;
}