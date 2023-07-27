#include<iostream>
using namespace std;
  // program to find key from array using binarysearch
  
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



int main(){
int firstarr[10]={2,5,5,9,9,12,20,20,20,30};
cout << "the lastacc. of 9 is "<<  binarysearch(firstarr,10,9)<< endl;  //1
cout << "everything is fine";
}