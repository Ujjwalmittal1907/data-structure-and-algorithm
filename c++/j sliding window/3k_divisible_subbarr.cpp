#include<iostream>
#include<map>
using namespace std;

int num_subarray(int arr[] , int size , int k){
    int total = 0;
    int pre_sum=0;
    int pre_rem = 0;
    map< int,int> m;

    for(int i = 0; i<size;i++){
        pre_sum+= arr[i];
        pre_rem = pre_sum % k;
        if(pre_rem < 0){
            pre_rem+=k;
        }
        
        if(m.count(pre_rem) ){
            total+=m[pre_rem];
            m[pre_rem]++;
        }

        else{
            m[pre_rem]++;
        }

    }
    return total; 
}
int main(){
    int arr[8] ={3,8,14,17,26,30,36,45};
    cout << num_subarray(arr,8,7);
    cout << endl << " NEXT" << endl ;
    cout << (3-8)%7 << endl;
    int arr1[10] ={2,3,-8,-3,11,4,8,6,9,4};
    cout << num_subarray(arr1,10,7);




}