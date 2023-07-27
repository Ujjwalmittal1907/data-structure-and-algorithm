//  to identify whether a number is a prime number 
 
#include<iostream>
using namespace std;
int main(){

int num;
cout << "enter a number ";
cin >> num;
int n=0;                               // we should a store value in an integer and using that we can 
for(int i=2; i<=num/2;i++){            // print our both condition... 
if(num%i==0){
    n+=1;
     break ;
}
}
if (n==0){
    cout << "entered number is a prime number";

}
}