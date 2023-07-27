#include<iostream>
using namespace std;
 
 void print_cou(int n){
    // recursive base
    if (n==0){
        return;
    }
    // recursive relation
   print_cou(n-1);
    cout << n << endl;
 }
int main(){

    int n;
    cin >> n;
    print_cou(n);

    
    return 0;
}