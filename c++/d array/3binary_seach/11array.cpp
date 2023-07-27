#include<iostream>
using namespace std;

int leastocc(int arr[],int size,int key)
{                                            // pehle hum last index of occurancr ke liye function
int start=0;
int end=size-1;
int least;
int mid=start+(end-start)/2;
while(start<=end){                         // agar key mid index per hi hai matlab iska least occ. 
if(arr[mid]==key){                        // left side hi hoga  end ko pahuncha diya
    least=mid;
    end=mid-1;
}
else if(arr[mid]>key){                  // agar key chotti hai then again hum fun. ko left pahunch diya
    end = mid-1;
}
else{ start=mid+1;}
mid=start+(end-start)/2;      // else case mai key badi hai to humne fun. ko right mai pahunch diya
}
return least;
}


int mostocc(int arr[],int size,int key)
{                      // now case for most accourance
int start=0;
int end=size-1;       
int most;              
int mid=start+(end-start)/2;
while(start<=end){
if(arr[mid]==key){           // agar mid index per hi key hai  to next most occ. only right mai hoga
    most=mid;                // function ko right mai pahuncha diya 
    start=mid+1;
}
else if(arr[mid]>key){
    end = mid-1;                // baaki same as it as least occurance case
}
else{ start=mid+1;}
mid=start+(end-start)/2;
}
return most;
}

int numberocc(int arr[],int size ,int key){
 int num = mostocc( arr, size,key) -  leastocc( arr,size,key) ;
  cout << num;
 }
int main(){

int ujjwal[11]={0,5,5,5,7,8,8,10,10,10,10};
int first= mostocc(ujjwal,11,5) -  leastocc(ujjwal,11,5) ;
int second= mostocc(ujjwal,11,10) -  leastocc(ujjwal,11,10);

cout << "the least occurance of 5 is " << leastocc(ujjwal,11,5) << endl; // 1
cout << "the most occurance of 5 is " << mostocc(ujjwal,11,5) << endl; // 3

cout << "the no. occurance of 5 is " <<  numberocc(ujjwal,11,5) << endl ;  // 2
cout << "the no. occurance of 5 is " << first << endl;  //2
cout << endl;

cout << "the least occurance of 10 is " << leastocc(ujjwal,11,10) << endl; // 7
cout << "the most occurance of 10 is " << mostocc(ujjwal,11,10) << endl; // 10

cout << "the no. occurance of 10 is " <<  numberocc(ujjwal,11,10) << endl ;  // 3
cout << "the no. occurance of 10 is " << second << endl;   //3

cout << "everything is ok";


}