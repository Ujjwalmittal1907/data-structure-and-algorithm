#include<iostream>
using namespace std;
// introducing void function
void update( int arr[],int size){
  for (int i=0;i<size ;i++){
    cout << i << " ";
  }


}
int main ()
{
 int ram[5]={1,5,7,6,4};

 update(ram,5)  ;  // printing array 1 using function
cout << endl ;
cout << "printing other array" << endl ;

 int ram1[3]={0,4,6};
 update(ram1,3);        // printing array 2 using function

 cout << "printing the array";
 
}