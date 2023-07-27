#include<iostream>
using namespace std;
int count(int n){
 // recursive base 
 if(n==0){
    return;
 }
// recursive relation
count(n-1);
}

int main(){
    int n;
cout << "enter the number ";
cin >> n;

count(n);




}