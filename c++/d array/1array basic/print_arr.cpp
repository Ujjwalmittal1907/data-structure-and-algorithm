#include<iostream>
using namespace std;
int main ()
{  // printing the elements at some index no.
 int ritika[5]={0,5,9,7,4};
 for (int i=0; i<=4; i++){           // 0 5 9 7 4
    cout << "index no. of " << i << " is " << ritika[i] << endl;
 }
 cout << "element of index 2 is " << ritika[2] << endl ;  // 9
 cout <<  "element of index 4 is " << ritika[4] << endl ;   // 4

 cout << endl ;
 // printing the size of given array 
 cout << sizeof(ritika) << endl ;   //20
 int ujjwal[15];

 // finding number of elements in a array ..
 cout << "no. of elements are " << sizeof(ujjwal)/sizeof(int) << endl;   //15



cout << "everything is fine";

}