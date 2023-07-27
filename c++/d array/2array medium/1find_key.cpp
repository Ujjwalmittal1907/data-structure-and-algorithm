#include<iostream>
using namespace std;
  // program to find key from array using binarysearch
  
int binarysearch(int arr[] ,int size ,int key){
int start=0;                                      
int end=size-1;
int mid=start+(end-start)/2;  // 
while(start<=end){
    if(arr[mid]==key){             // agar mil gaya to print kra diya index no.
        return mid;
    }
    if(key > arr[mid]){
        start=mid+1;        // agar key badi hai to kawal mid ke right mai function bheja
    }
    else{end=mid-1;}            // agar key  mid se chotti hai to left mai bheja
    mid=start+(end-start)/2;
}

}



int main(){
int firstarr[10]={2,5,6,9,12,14,15,20,25,30};


cout << "the index no. of 5 is "<<  binarysearch(firstarr,10,5)<< endl;  //1
cout << "the index no. of 9 is "<< binarysearch(firstarr,10,9) << endl;  //3
cout << "the index no. of 20 is "<<  binarysearch(firstarr,10,20)<< endl;  //7
cout << "the index no. of 2 is "<<  binarysearch(firstarr,10,2) << endl;  //0
cout << "the index no. of 12 is "<<  binarysearch(firstarr,10,12)  << endl;  //4


cout << "everything is fine";




}