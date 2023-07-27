// program for reversing the array ;

#include<iostream>
using namespace std;

void reverse( int arr[], int n){
    int start=0 ;                         // initiating reverse functin
    int end =n-1;
    swap(arr[start], arr[end]);
    start++;
    end--;
}


void printarray( int arr[], int n){
    for(int i=0; i<n ;i++){            // initiating array printing command
        cout << arr[i];
        cout <<" ";
    }
    cout << endl;
}


int main(){
int arr1[5]={1,55,66,8,9};   // declaring two arrays
int arr2[3]={-5 , 2,6};

reverse(arr1 ,5);
reverse(arr2 ,3);         // calling reverse function

printarray(arr1 ,5);       
printarray(arr2, 3);      // calling printing array function
cout << "everything is fine";
return 0;
}