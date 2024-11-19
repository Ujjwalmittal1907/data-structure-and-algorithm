#include<iostream>
#include<vector>
using namespace std;

void findsum(vector<int> arr , int index , int n, int k , vector<vector<int> > &ans , vector<int>temp , int sum){
   
   if(index == n){
      if(sum == k){
          ans.push_back(temp);
      }
       return ; 
   }

    findsum(arr , index+1 , n , k , ans , temp,sum);

    // sum add ker
    temp.push_back(arr[index]);
    findsum(arr , index+1 , n ,k ,ans,temp,sum+arr[index]);
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
    int k =6;


    vector<vector<int> > ans;
    int sum = 0;
    vector<int>temp;

    findsum(arr , 0 , n , k , ans , temp , sum);
    for(int i = 0; i<ans.size();i++){
        for(int j =0;j<ans[i].size();j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}