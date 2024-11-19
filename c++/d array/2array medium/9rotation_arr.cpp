#include<iostream>
using namespace std;

// Approach 1 by shifting the one by one element 

// void key_reverse(int arr[] , int size, int k){
//     int ans =0;
//   while(ans < k){
//     int next;
//     int curr = arr[0];
//     for(int i=0 ; i < size-1 ; i++){
//          next = arr[i+1];
//          arr[i+1] = curr;
//          curr = next;

//     }
//     arr[0] = curr;
//     ans++;
//   }

// }
// time complexity is O(n2)


 // Approach 2 by using a temperary array
  // #1 made temperary array
  // #2 store first n-k elements at k to n position
  // #3 store rest elemenmt at starting of temp array
  // #4 store value in origional array
// void key_reverse(int arr[] , int size , int k){

//   int temp[size];
//   // int i=0
//   for (int j=0 ; j<size; j++){
//     temp[(j+k)%size] = arr[j];
//     //i++;
//   }
//   // for(int j =0 ; j< k ;j++){
//   //   temp[j] = arr[i];
//   //   i++;
//   // }
//   for(int i =0 ; i < size ; i++){
//     arr[i] = temp[i];
//   }
// }
// time complexity O(n)
// space compexity O(n)

// APPROCH 3 
  // #1 reverse entire array
  // #2 reverse first k element
  // #3 reverse next n-k element

void reverse(int arr[] , int s,int e){
  int i=s;
  int j =e-1;
  while(i<j){
    swap(arr[i] , arr[j]);
    i++;
    j--;
  }
}
void key_reverse(int arr[] , int size , int k){
reverse(arr,0,size);
reverse(arr,k,size);
reverse(arr,0,k);
}

void print_arr( int arr[] , int size){
    for(int i =0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int arr1[7]= {1,2,3,4,5,6,7};

    
    // void key_reverse(arr,6);
    key_reverse(arr,6,2);
    print_arr(arr,6);
    cout << endl;
    key_reverse(arr1,7,3);
    print_arr(arr1,7);

   int arr2[2]={1,2};
     cout << endl;
    key_reverse(arr2,2,1);
    print_arr(arr2,2);


}

    
    


    

 