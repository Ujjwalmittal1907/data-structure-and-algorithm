// 412 if this is in input we took out each dfigit like 2 , 1 and 4 we now very well how to get this digit just by modulus operator
#include <iostream>
using namespace std;	

void say_digit( int n , string arr[]){

if (n==0){
    return ;
}
int digit=n%10;
n/=10;
say_digit(n,arr);
cout << arr[digit] << endl;

}
int main(){

 string arr1[10 ] = {"zero","one","two","three","four","five","six","seven","eight",
      "nine"};
int num;
cout << "enter the num";
cin >> num;
say_digit(512 , arr1);
return 0;
}
