#include<iostream>
using namespace std;
 
int main(){
    int i=8;
    int *po=&i;                              
    int **po2=&po;                                                           
    cout << "printing po "<< *po << endl;           //  dekh rahe0 ho 
    cout << "printing po2 "<< *po2 << endl;         //  

    cout << "printing po2 "<< **po2 << endl;
    cout << "printing po2 "<< **po2+1 << endl;
    **po2+=1;
    cout << endl << endl;
   cout << "addressv of i" << i << endl;
    cout << "address  po "<< po << endl;
    cout << "address  po2 "<< po2 << endl;
     cout << endl << endl;
     cout << "address po2 "<< po2+1 << endl;
     cout << "printing po "<< po2+2 << endl;
    

   return 0;
}