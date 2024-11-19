// here we seen two recursive function for checking sorted array and 
// sum of a given array.
#include<iostream>
using namespace std;

bool is_sorted(int arr[] , int size){

    if(size == 0 || size == 1){
        return true;
    }

    // recursive call
    if(arr[0] > arr[1]){
        return false;
    }

    else{
        bool remainingpart = is_sorted(arr+1 , size-1);
        return remainingpart; 
    }
}

int sum_arr(int arr[] , int size){
    if(size == 0){
        return 0;
    }
    if(size ==1){
        return arr[0];
    }

    int ans = arr[0] + sum_arr(arr+1 , size-1);
    return ans ;
}
int main(){

    int arr[6] = { 1,2,3,4,10 , 11};
    int arr2[6] = { 1,2,3,11,5 ,10};


   cout << "sum of array1 is " <<  sum_arr(arr , 6) << endl;
   if(is_sorted(arr , 6)){
    cout << "yes arr1 is sorted " << endl;
   }
   else{
    cout << "array is not sorted" << endl;
   }

  cout << "sum of array2 is " <<  sum_arr(arr , 6) << endl;
   if(is_sorted(arr2 , 6)){
    cout << " yes arr2 is sorted " << endl;
   }
   else{
    cout << "array2 is not sorted" << endl;
   }
   int arr3[2] = {2,3};

   cout << "sum of array3 is " <<  sum_arr(arr3 , 2) << endl;

}