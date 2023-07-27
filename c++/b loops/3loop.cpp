// simple program to find sum of first n  natural number

#include<iostream>
using namespace std;   // 
int main()
{
  int a ,i ;
  cout << "enter the number";
  cin >> a ;     // input to give stopping point
  int sum=0;     //defined our integer
  for(i=1;i<=a;i++){    //for condition
    sum+=i ;      //operation
  }
  cout << sum << endl;




    return 0;
}