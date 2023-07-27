#include <iostream>
using namespace std;	

void insertion_short(int arr[],int size){
for (int i=1;i<size-1;i++){
    int j;
    int temp=arr[i];
    for( j=i-1;j>=0;j--){
        if(arr[j]>temp){
            arr[j+1]=arr[j];
        }
        else{break;}
    }
    arr[j+1]=temp;
    }
}
void printarr(int arr[],int s){
    for (int i=0;i<s;i++){
       cout << arr[i] << " ";
    }
}
int main()
{
    int arr[6]={4,9,3,6,5,10};
    insertion_short(arr,6);
    printarr(arr,6);
    cout << endl;
    int arr1[4]={4,12,11,20};
    insertion_short(arr1,4);
    printarr(arr1,4);

    return 0;
}