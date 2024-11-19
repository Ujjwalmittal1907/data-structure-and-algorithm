#include<iostream>
using namespace std;

void merge(int arr[] , int s , int e){
   int mid = s+(e-s)/2;
   int size = e-s+1;
   int sub1 = mid-s+1;
   int sub2 = e-mid;

  int *first = new int[sub1];
  int *second = new int[sub2] ;


  int num1 =s;
  int num2 = mid+1;

  for(int i =0 ;i<sub1;i++){
    first[i] = arr[num1++];
  }
  for(int i=0 ; i<sub2 ; i++){
    second[i] = arr[num2++];
  }

  int i =s ;
  int j =0;
  int z = 0;

  while( j < sub1 && z < sub2 ){
    if(first[j] < second[z]){
        arr[i++] = first[j++];
    }

    else{
        arr[i++] = second[z++];
    }
  }

  while(j < sub1){
    arr[i++] = first[j++];
}

  while(z < sub2){
    arr[i++] = second[z++];
    
  }

  delete []first;
  delete []second;
  
}

void mergesort( int arr[], int s, int e){
    // base case 
    if(s >=e){
        return ;
    }
    // mid nikkal le
  int mid = s+(e-s)/2;
   // left part ko merge sort kerde
  mergesort(arr , s,mid);

  // right part ko merge sort ker de
  mergesort(arr , mid+1 , e);

  // aab ine dono ko merge ker

  merge(arr,s,e);



}

int main(){

int arr[6] = {8,3,1,30,15,6};
cout << " hi";
 mergesort(arr , 0 ,5 );

 for(int i =0 ; i< 6;i++){
    cout << arr[i] << endl;
 }

}


