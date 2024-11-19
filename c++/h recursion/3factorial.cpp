#include<iostream>
using namespace std;

int fact(int n){
 // recursive base
 if (n==0){
    return 1;
 }

 // recursive solution
 int ans = fact(n-1) * n;
 return ans;
}



int main(){
int n;
cin >> n;

cout << fact(n) ;



}