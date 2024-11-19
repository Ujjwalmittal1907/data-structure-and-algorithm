#include<iostream>
#include<vector>
// #include<math>
using namespace std;

int max_subarray_sum( vector<int> arr){
    int sum = 0;
    int maxi = arr[0];

    for(int i = 0;i< arr.size(); i++){
        sum += arr[i];
        maxi = max(maxi , sum);
        if(sum < 0){
            sum = 0;
        }
    }
    return maxi;
}

int main(){
    vector<int> first;
    first = { 1,2,4,-8,2,10};

    cout << "maximum sum of subarray" << max_subarray_sum(first) << endl;

     vector<int> firs;
    first = { 1,2,4,-5,2,10};

    cout << "maximum sum of subarray" << max_subarray_sum(firs);

}