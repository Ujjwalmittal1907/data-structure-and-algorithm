#include<iostream>
using namespace std;
 
int main(){
    int ujj[10]={2,4,9,8,7,2,4,44,98,12};
    cout << "address of arrays ist element " << ujj << endl;       // address
    cout << "address of arrays ist element " << &ujj[0] << endl;   // same addresas
    cout << "address of arrays ist element " << &ujj[1] << endl;
    cout << "address of arrays ist element " << &ujj[2] << endl;
    cout << "address of arrays ist element " << &ujj[3] << endl;
    int *poi=&ujj[0];
    cout << "now elements  is" << *poi << endl;
    cout <<"its the address "<<  poi << endl;

    cout << "lets play with pointer" << endl;
    cout << "1st " << *ujj  <<  endl;                     //formula hp gya
    cout << "2nd" << *ujj+1 << endl;                     // arr[i]=*(arr+i)
    cout << "3rd" << *(ujj+1) << endl;                  // chalakki +++
    cout << "4th" << *(ujj+2) << endl;                 //i[arr]=*(i+arr)
    cout << "5th" << *(ujj+2)+2 << endl;

     // cout << "6th " << &(ujj+1) << endl;  error

    // lets sees aiur chalakki working or not
   int i=7;
    cout << i[ujj] << endl;    // 44  8/

  int ujjwal[5];
int *poin=&ujjwal[0];
  cout << sizeof(ujjwal) << endl;   //20
  cout << sizeof(&poin) << endl;    //4
 cout << sizeof(*poin) << endl;     //4
    

/*int ujj[5]={1,5,9};
char moh[6]= "abcde" ;
int *poi=&ujj[0] ;
cout << poi << endl;     // prints only address of array

char *p=&moh[0];

cout << p << endl;      // prints all the contents of string 
cout << *p << endl;
cout << *(p+1) << endl;
cout << *(p+2) << endl;

cout << "haaaaaa"; */
}