// time complexity    

#include<iostream>
using namespace std;

class MaxHeap{
    public:
     int total_size;
     int size;
     int *arr;

     // constructor
     MaxHeap(int temp){
        arr = new int[temp];
        total_size = temp;
        size = 0;
     }

     void insert(int num){
        if(size == total_size){
            cout << "MaxHeap is overflow ";
        }

        arr[size] = num;
        int index = size;
        size++;

        chalo_set_kerte(index);
     }
  

   void chalo_set_kerte(int index){
     // agar parent 0th nhi hai and child se bada hai 
      //to swap kerde and aab phir set ker de upper wale ko 

    int parent = (index-1)/2;
    if(index > 0 && arr[parent] < arr[index]){
        swap(arr[parent] , arr[index]);
        index = parent;
        chalo_set_kerte(index);

        
    }
   }  

   void pop(){

    if(size == 0){
        cout << "MaxHeap is undelflow" ;
        return;
    }

    arr[0] = arr[size-1];
    size--;
    Heapify(0);
   }

   void Heapify(int index){
    int largest = index;
    int left = 2*index+1;
    int right = 2*index+2;

    if(left <size && arr[left] > arr[largest]){
        largest = left;
    }

    if(right < size && arr[right] > arr[largest]){
        largest = right;
    }

    if(largest != index){
        swap(arr[largest] , arr[index]);
        Heapify(largest);
    }

}

   void print(){
    for(int i = 0; i<size;i++){
        cout  << arr[i] << " ";
    }
   }


};
int main(){

    MaxHeap h(10);
    h.insert(20);
    h.insert(5);
    h.insert(30);
    h.insert(10);
    h.insert(4);
    h.insert(50);


    h.print();
    h.pop();
    cout << endl;

    h.print();



}