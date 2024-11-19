// question says if it is possible to divide the array into two sunarray such that both have qual sum 

/* Approach 1: time complexity O(n2)  we will use 2 loop and took sum1 of left and sum2 of right and
            then compare
  
  for(int i =0 ; i< size-1; i++){
    for(int j =0 ; j <= i ; j++ ){
        sum1 += arr[j]
    }

    for(int k = i+1 ; k<size;k++){
       sum += arr[k] 
    }

    if (sum1 == sum2){
        return 1;
    }
  }


*/

// Approach2:- we have take the sum of whole array . then take prefix and left_array sum by subtracting 
//             and comparing   T -: O(n).
#include<iostream>
#include<vector>
using namespace std;

bool subarray_equalsum( vector<int> arr, int size){
     int total_sum = 0;
    for(int i =0 ; i<size;i++){
        total_sum += arr[i];
    }

   int prefix = 0;

   for(int i = 0; i< size-1;i++){
    prefix += arr[i];
    int sum_left = total_sum - prefix;
    if(prefix == sum_left){
        return 1;
    }

   }

   return 0;
}
int main(){

  vector<int> first;
  first = { 1,2,4,5,2,10};

  cout << "ans is " << subarray_equalsum(first , 6) << endl;


   vector<int> second;
  second = { 2,4,6,2,1,5,8,2,5};

  cout << "ans is " << subarray_equalsum(second , 9) << endl;




}