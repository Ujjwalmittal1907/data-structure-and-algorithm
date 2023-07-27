#include<iostream>
using namespace std;

int arr_sum(int arr[], int size){

// recursive base

if( size == 0 ){
    return 0 ;
}

 return arr[size - 1] + arr_sum(arr , size-1);

}

int main(){

int first[5]={2,5,6,8,9};

cout << arr_sum(first,5);



}