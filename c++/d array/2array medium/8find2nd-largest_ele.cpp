#include<iostream>
using namespace std;

void second_largest(int arr[] , int size){
   int max1=0;
   int max2=0;
    for(int i =0;i < size;i++){
        if(arr[i] > max1){
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i]<max1)
        {
            max2 = arr[i];
        }
        else{
            continue;
        }
        
    }
  cout << "largest second element in array is : " << max2 << endl;  
}
int main(){

int arr1[7] ={5,7,6,9,8,1,2};
second_largest(arr1, 7);

int arr2[5] ={5,3,1,2,4};
second_largest(arr2, 5);

int arr3[6] ={5,3,1,2,4,6};
second_largest(arr3, 6);

}