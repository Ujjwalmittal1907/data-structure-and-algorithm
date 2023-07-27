// for finding minimum and maximum in the given array

#include<iostream>
using namespace std;

int max_fun(int arr[],int size){
    int max=0;
    for (int i=0;i < size;i++){                 // function for maximum elemrnts in array
        if (arr[i]> max){
            max=arr[i];
        }
    }
    return max;
}

int min_fun(int arr[],int size){             // function for finding minimum element in array
    int min=arr[0];
    for(int i=1;i<size;i++){
        if (min>arr[i]){
            min=arr[i];
        }
    } return min;
}

int main(){


    int arra[6]={10,5,6,13,2,5};                            
    cout << max_fun(arra,6) << endl;                         // 13
    cout << min_fun(arra,6) << endl;                         //2
    
    cout << "lets take one more example" << endl;

    int ujjwal[8]={6,8,4,3,9,9,44,55};
    cout << max_fun(ujjwal,8) << endl;                  // 55
    cout << min_fun(ujjwal,8) << endl;                  // 3
    
}