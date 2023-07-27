#include<iostream>
using namespace std;
int main()
{    // entering number of elements in arrat and then print all in the array
    int num ;
    cout << "enter the no. of elements:-" ;
    cin >> num ;
    int ujjwal[50]; 
for(int i=0;i<=num ;i++){
    cout << "enter the index " << i << " :-" ;     // input of all elements
    cin >> ujjwal[i] ;
    cout << endl ;}

 cout << "the array you entered is ";
    for (int j=0; j<num ; j++){

    cout << ujjwal[j] << " ";
    }

return 0;
}