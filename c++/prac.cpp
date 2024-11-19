#include<iostream>
using namespace std;
#include<vector>

void bubble(std::vector<int> &arr){

     int size = arr.size();

     for(int i = 0 ; i < size ;i++){
        for(int j = i ;j < size-i;j++){
          if(arr[j] > arr[j+1]){
            swap(arr[j] , arr[j+1]);
          }
        }
     }
}

int main(){
    std::vector<int> ar[4] ;
    ar = {4,3,2,1};
    bubble(ar);

    for(int i = 0 ; i< 4;i++){
        cout << ar[i] << " " ;
    }

}



