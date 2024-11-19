#include<iostream>
using namespace std;
 
 void print_cou(int n){
    // recursive base
    if (n==0){
        return ;
    }
    // recursive relation
   print_cou(n-1);
    cout << n << endl;
 }

 void count(int n){
 // recursive base 
 if(n==0){
    return  ;
 }
// recursive relation
 count(n-1);
 
 cout << n ;
}
int main(){
    int n;
    cin >> n;
    print_cou(n);

    
    return 0;
}