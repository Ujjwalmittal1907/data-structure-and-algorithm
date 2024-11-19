#include<iostream>
#include<vector>
using namespace std;

// class Solution {
// public:

//     void subseq( vector<int>& nums , int index , int n ,vector<vector<int> >&ans ,       vector<int>temp ){
//         if(index == n){
//             ans.push_back(temp);
//             return ;
//         }
//         // not included
//       subseq(nums , index+1 , n , ans, temp);
//         // included
//       temp.push_back(nums[index]);
//       subseq(nums , index+1 , n , ans, temp);
      
// }

//     vector<vector<int>> subsets(vector<int>& nums) {

//         vector<vector<int> >ans;
//         vector<int>temp;

//         subseq(nums , 0, nums.size(), ans , temp);
//         return ans;
        
//     }
// };

class Solution {
public:

    void subseq( vector<int>& nums , int index , int n ,vector<vector<int> >&ans ,       vector<int>&temp ){
        if(index == n){
            ans.push_back(temp);
            return ;
        }
        // not included
      subseq(nums , index+1 , n , ans, temp);
        // included
      temp.push_back(nums[index]);
      subseq(nums , index+1 , n , ans, temp);
      temp.pop_back();
      
}

    // vector<vector<int>> subsets(vector<int>& nums) {

    //     vector<vector<int> >ans;
    //     vector<int>temp;

    //     subseq(nums , 0, nums.size(), ans , temp);
    //     return ans;
        
    // }
};

int main(){
    
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int> >ans;
        vector<int>temp;

        subseq(nums , 0, nums.size(), ans , temp);
        // cout << ans;

}


// for a string having no empty subsequence

void subseq( vector<int>& nums , int index , int n ,vector<vector<int> >&ans ,       vector<int>&temp ){
        if(index == n){
            ans.push_back(temp);
            return ;
        }
        // not included
      subseq(nums , index+1 , n , ans, temp);
        // included
      temp.push_back(nums[index]);
      subseq(nums , index+1 , n , ans, temp);
      temp.pop_back();
      
}