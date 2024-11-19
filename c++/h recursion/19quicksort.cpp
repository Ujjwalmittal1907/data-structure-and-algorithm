#include<iostream>
using namespace std;

int partition(int arr[] , int s, int e){
int num = arr[s];
int count = 0;

for(int i =s+1 ; i<= e ; i++){
    if(arr[i] < num){
        count++;
    }
}

int numindex = s+count;
swap(arr[s] , arr[numindex]);
int i = s;
int j = e;
while( i < numindex && j > numindex){
    while(arr[i] < arr[numindex]){
        i++;
    }
    while(arr[j] > arr[numindex]){
        j--;
    }

    if(i < numindex && j > numindex){
        swap(arr[i] , arr[j]);
    }
}
return numindex;


}

void quicksort(int arr[] , int s, int e){
    if(s>=e){
        return;
    }
   int p =  partition(arr ,  s, e);

    quicksort(arr ,s,p-1 );
    quicksort(arr , p+1 , e);



}
int main(){

    int arr1[7] = {9,9,9,8,2,3,-6};

    quicksort(arr1 ,0,6);
    cout << "hi";

    for(int i =0 ; i< 7; i++){
        cout << arr1[i] << endl;
    }

    

}