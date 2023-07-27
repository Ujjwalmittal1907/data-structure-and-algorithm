#include<iostream>
using namespace std;
 
int main(){
    int i=10;
    int *q=&i;

    cout << "address of i is " << q << endl;
    cout << "element in i is " << *q << endl;

    cout << "element in i is " << *q << endl;
    int arra[4]={5,10,20,30};
    int *w=&arra[4];
    cout << "address of first element " << w << endl;
    cout << "address of first element " << &arra[0] << endl;
 cout << "address of first element " << &arra[2] << endl;
  cout << " element is"  << *arra << endl;
   cout << " second element is"  << *(arra+1) << endl;

   cout << " second element is"  << *arra+1 << endl;
    return 0;
}