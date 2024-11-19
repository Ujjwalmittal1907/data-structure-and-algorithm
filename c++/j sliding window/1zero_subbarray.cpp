#include<iostream>
#include<map>
using namespace std;

// bruette force

void find_subbarray(int arr[], int size){
    int sum=0;
    for(int i = 0; i< size-1;i++){
        sum = 0;
        for(int j = i; j <size-1;j++){
            sum+=arr[j];
            if(sum == 0){
                for(int k = i; k<=j;k++){
                    cout << arr[k] << " ";
                }
                cout << endl;
            }
        }
    }
}

// optimal approach
int zero_subbarray(int arr[] , int size){
    int sum = 0;
    int total = 0;
    map< int,int>m;
    for(int i =0;i< size;i++){
        sum+=arr[i];
        if(m.count(sum)){
            total+=m[sum];
            m[sum]++;
        }
        else{
            m[sum] = 1;
        }
    }
        return total;

    
    

}
int main(){
    int arr[10] = {6,-1,-3,4,-2,2,4,6,-12,-2};
    find_subbarray(arr,10);

}