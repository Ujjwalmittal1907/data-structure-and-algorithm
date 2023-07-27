#include<iostream>
using namespace std;

void bubblesort(int arr[], int size){
for(int i=1;i<size;i++){
for(int j=0; j<size-i;j++){
    if (arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
    }
}
}
}
int printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}
 
int main()
{
    int ujjwal[7]={9,10,2,5,4,6,8};
    bubblesort(ujjwal,7);
    printarray(ujjwal,7);
    cout << "everything is fine";
    return 0;
}