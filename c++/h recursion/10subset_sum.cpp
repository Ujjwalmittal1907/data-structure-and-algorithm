#include<iostream>
#include<vector>
using namespace std;

void findsum(vector<int> arr , int index , int n,  vector<int> &ans , int sum){
   
   if(index == n){
      ans.push_back(sum);
       return ; 
   }

    findsum(arr , index+1 , n ,  ans ,sum);

    // sum add ker
    findsum(arr , index+1 , n  ,ans,sum+arr[index]);
}


// vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
// {
//     // Write your code here.
//     vector<vector<int> > ans;
//     int sum = 0;
//     vector<int>temp;

//     findsum(arr , 0 , n , k , ans , temp , sum);
//     return ans;
// }

int main(){
    vector<int>arr;
    arr = {2,4,6};
    int n = 3;


    vector<int>  ans;
    int sum = 0;

    findsum(arr , 0 , n ,  ans , sum);
    for(int i = 0; i<ans.size();i++){
        cout << ans[i];
        cout << endl;
    }
}



// question 2
// subset sum equal to k

#include <bits/stdc++.h> 
bool findsum(vector<int> arr , int index , int n, int k , int sum){
   
   if(index == n){
      if(sum == k){
          return true;
      }
       return false; 
   }

   return  (findsum(arr , index+1 , n , k ,sum) || findsum(arr , index+1 , n ,k ,sum+arr[index]));
    
}

bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    int sum = 0;

   return  findsum(arr , 0 , n , k , sum);


   
}