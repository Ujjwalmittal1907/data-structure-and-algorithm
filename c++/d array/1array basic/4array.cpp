#include<iostream>
using namespace std;
int main()
{                       // input an array and finding its sum
 int papa[1002];
int num;               
int sum=0;
 cout << "no.of elements in array papa ";       // declaring its no. of element 
 cin >> num;                               
 for (int i=0 ;i <num ;i++){
 cout << "enter element at index no. " << i << " " ;  // to input all elements of array
 cin >> papa[i];
 sum+=papa[i];
 }
 cout << "the elements in array papa are ";     // printing elements you entered
for(int j=0;j<num;j++){
cout << papa[j] << " "; 
}
cout << endl;
cout << "type sum of array u entered in papa array " <<  sum;   // printing sum of elements
return 0;}
