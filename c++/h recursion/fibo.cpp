#include<iostream>
using namespace std;

int fibb_ser(int n){
// recursive base 
if (n==0){
    return 0;
}
    if (n==1){
        return 1;
    }
    
    // recursive relation
 cout <<  fibb_ser(n-1) + fibb_ser(n-2);
    
}

int main(){

cout << "enter the number of elements in fibb series ";
int num  ;
cin >> num;

}
