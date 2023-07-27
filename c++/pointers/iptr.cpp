#include<iostream>
using namespace std;
 
int main(){
    
    int ujj=10;
    int *poi=&ujj;
    cout << *poi << endl;    // 10
    cout << poi << endl;      // address of ujj   
    cout << sizeof(poi) << endl;     // size of the address
    cout << sizeof(*poi) << endl;     // size of the ujj (int size)
    cout << sizeof(ujj) << endl;          // size of num (int size)
     ujj++;
     
    cout << "after increment " <<*poi << endl;         // 11
    int *q=poi;
    cout << *q << endl;      
    cout << q << endl;      // address of p is going to be 
    cout << sizeof(*q);
    return 0;
}