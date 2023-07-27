#include<iostream>
using namespace std;
int main()      // for finding the sum of digits 
{
    int a ;
    cin >> a ;
    int sum=0 ;
    while (a>0){
    int digit = a%10;
    sum+=digit;
    a/=10 ;
    }
    cout << sum ;
    return 0;
}
