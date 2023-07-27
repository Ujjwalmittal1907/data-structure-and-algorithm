// program to find first number which is divisible by both 5 and 7

#include<iostream>
using namespace std;
int main()
{
  int i =5 ;
  while (true){
  if (i%7==0){
    cout << i << endl ;
    break;
  }
   i+=5;
   
  }
  return 0;
}