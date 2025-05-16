#include<iostream>
#include<vector>
using namespace std;
//1. program to find key from array using binarysearch
  
int binarysearch(int arr[] ,int size ,int key){
int start=0;                                      
int end=size-1;
int store=-1 ; 
int mid=start+(end-start)/2;  // 
while(start<=end){
    if(arr[mid]==key){             // agar mil gaya to print kra diya index no.
        store = mid;
        end=mid-1;
    }
    else if(key > arr[mid]){
        start=mid+1;        // agar key badi hai to kawal mid ke right mai function bheja
    }
    else{end=mid-1;}            // agar key  mid se chotti hai to left mai bheja
    mid=start+(end-start)/2;
}
return store;
}

// lower bound (inportant used to solve number of problem)
//lower bound :- smallest index such that nums[index] >= x

int lower_bound(vector<int>nums , int target){
    int s = 0;
    int e = nums.size();
    int ans = -1;
    while(s <= e){
        int mid = s+(e-s)/2;
        if(arr[mid] >= target){
            ans = mid ;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return ans ;

}
// stl for lower bound
lb = lower_bound(nums.begin(), nums.end(), x)-nums.begin();
lb2 = lower_bound(arr , arr+n , x);

//3. upper bound : greatest integer sunch that nums[index] > x(upper bound mai equal nhi hota )
int lower_bound(vector<int>nums , int target){
    int s = 0;
    int e = nums.size();
    int ans = -1;
    while(s <= e){
        int mid = s+(e-s)/2;
        if(arr[mid] > target){
            ans = mid ;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return ans ;

}
// stl same as lower bound 

int main(){
int firstarr[10]={2,5,5,9,9,12,20,20,20,30};
cout << "the lastacc. of 9 is "<<  binarysearch(firstarr,10,9)<< endl;  //1
cout << "everything is fine";
}