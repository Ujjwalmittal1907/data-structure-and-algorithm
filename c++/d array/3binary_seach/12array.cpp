#include<iostream>
using namespace std;
           // to get a pivot no. of rotated array
int getpivot(int arr[] , int size){
int s=0;   
int e=size-1;
int mid=s+(e-s)/2;          
while(s<e){

if (arr[mid]>=arr[0]){
    s = mid+1;                 
}
else{
    e=mid;
}
mid=s+(e-s)/2;
}

return s;
}
int main()
{

    int arr[9]={5,6,7,9,11,12,1,2,3};
    cout << getpivot(arr, 9);  // 6

cout << endl;
    int ujjwal[15]={20,25,30,34,40,41,42,10,11,11,11,12,15,16,17};
    cout << getpivot(ujjwal, 15);  // 7
}