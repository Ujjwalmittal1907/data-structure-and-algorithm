#include<iostream>
using namespace std;


// search in sorted rotated array 

class Solution {
public:
    int search(vector<int>& arr, int k) {
        int start = 0;
        int size = arr.size();
        int end = size-1;
        while(start<=end){
            int mid = (start+end)/2;
            if(arr[mid]==k){
                return mid;
            }
            if(arr[start]<=arr[mid]){
                if(arr[start]<=k && k<=arr[mid]){
                    end = mid-1;
                }
                else{
                    start = mid+1;
                }
            }
            else{
                if(arr[mid]<=k && k<=arr[end]){
                    start = mid + 1;
                }
                else{
                    end = mid-1;
                }
            }
           
        }
        return -1;
    }
};

// search in rotated sorted array contain duplicate 
class Solution {
public:
    bool search(vector<int>& A, int k) {

    int start = 0;
    int end = A.size()-1;
    int mid = (start+end)/2;

   while(start<=end){
            
            if(A[mid]==k){
                return true;
            }
            if (A[mid] == A[start] && A[mid] ==A[end]){
                start++;
                end--;
                continue;
            }

            if(A[start]<=A[mid]){
                if(A[start]<=k && k <=A[mid]){
                    end = mid-1;
                }
                else{
                    start = mid+1;
                }
            }
            else{
                if(A[mid]<=k && k<=A[end]){
                    start = mid + 1;
                }
                else{
                    end = mid-1;
                }
            }
           mid = (start+end)/2;
           
        }
        return false;
        
    }
};

// minimum in sorted rotated array 

class Solution {
public:
    int findMin(vector<int>& nums) {

        int left = 0, right = nums.size() - 1;
        int ans = INT_MAX;

        while(left <= right) {
            int mid = left + (right - left) / 2;

          if(nums[mid] >= nums[0] && nums[mid] > nums[nums.size()-1]){
            left = mid+1;
          }

          else{
            ans = min(ans, nums[mid]);
            right = mid-1;
          }
        }

        return ans;
        
    }
};


// to find the peak point in mountain array problem
int getpeak( int arr[] ,int size){
int s=0;
int e=size-1;
int mid=s+(e-s)/2;                       
while(s<e){                      //  pehle agar arr[mid+1]bada hai matlab pahad per chadana hai start ko 
    if(arr[mid]<arr[mid+1]){     // mid ke aage bhejo
        s=mid+1;
    }
    else                        // agar mid pahad ke niche utarne wali line pe hai to end ko muper bhejo
    {e=mid;}
    
    mid=s+(e-s)/2;
}
cout << s;
}
 
int main()
{
    int aditya[13]={3,5,6,7,8,9,15,18,20,16,15,10,1};
    getpeak(aditya ,13);
    cout << endl;
    cout << "everything is fine";
    return 0;
}