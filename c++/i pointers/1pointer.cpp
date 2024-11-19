#include<iostream>
using namespace std;
 
int main(){
    
    int ujj=10;
    int *poi= &ujj;
    cout << *poi << endl;    // 10
    cout << poi << endl;      // address of ujj   
    cout << sizeof(poi) << endl;     // size of the address
    cout << sizeof(*poi) << endl;     // size of the ujj (int size)
    cout << sizeof(ujj) << endl;          // size of num (int size)
    ujj++;
     
    cout << "after increment " <<*poi << endl;         // 11
     (*poi)++;
    
    cout << "after address increment " << poi << endl;
    cout << "one more increment " <<  *poi << endl;

    // poi++;
    cout <<"after address increment " << poi << endl;
    int *q=poi;
    cout << *q << endl;      
    cout << q << endl;      // address of p is going to be 
    cout << sizeof(*q);
    return 0;


}

/*NOTE1 : 
if we talk about the size then size(*p) always give size of primitive data structure i.e
4 for int 8 for double and all in case of size(p) it always stores the address irrespective of 
type of primitive ds so in some machine it gives 4 or 8 .
*/

/*NOTE2 : 
int *ptr = 0;
cout << *ptr;
it always give segmentatiuon fault as no such memory exists so if we try to null pointer
it give segmentation faulty*/

/*NOTE3 :

int *p = &num    --------1
as well as
int *p =0;  ------------2
p = &num;

1 & 2 are exactly the same.
*/

/*NOTE 4:

int i =4;
int *p = &i;
(*p)++;          ------ *p = *p +1;
 p++;             ------- p = p+1;

 ist case mai hame value ko increase kiya to simply 5 mil jaayega
 2nd cast mai address ko increase kar rahe by 1 so it will increase by size of address 
 i.e 4 or 8 byte
*/