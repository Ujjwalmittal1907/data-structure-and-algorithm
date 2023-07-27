// program for alternate reverse of an array and printing it

#include<iostream>
using namespace std;

void altreverse(int arr[] ,int n){     // initiating function to alterrnate reverse
   int start=0;
   int end=1;
   swap(arr[start],arr[end]);
   start+=2;
   end+=2;
}
void printarray(int arr[],int n){
    for(int i=0 ;i<n ;i++){
        cout << arr[i];             // initiating function of printing 
        cout << " ";
    }
    cout << endl;
}
int main(){
int arr1[4]={-4 ,3,2,-8};

 altreverse(arr1 , 4);        // calling alternate reverse function

 printarray(arr1 ,4);     // calling printing 

 cout << "everything is fine";
 return 0;
 }