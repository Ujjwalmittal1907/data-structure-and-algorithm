#include<iostream>
using namespace std;

int power(int n){
// base value
if(n==0){
    return 1;}
// recursive relation
 int bigrel= 2* power(n-1);
 return bigrel;
 }

int main(){
    int n;
    cin >> n;

    cout << power(n);
    
    return 0;
}