#include<iostream>
using namespace std;
 // to merge two sorted arrays

void merge(int arr1[],int n,int arr2[],int m,int arr3[],int o)
{
  int i=0;
  int j=0 ;
  int k=0;                         // function ko 3 arrays kae liye initialize pehle 2
  while(i<n && j<m){               // inputed arrays ke liye and 3rd mai sorted arrays 
    if (arr1[i]<arr2[j]){          // ke values jaayegi.
       arr3[k++]=arr1[i++];
}
    else{ 
      arr3[k++]=arr2[j++];
    
    }
   }              
   while(i<n){                // bacche hue elements ko print karne ki liye
    arr3[k++]=arr1[i++];
    
   }
   while(j<m){               // bacche hue elements ko print karne ki kliye
   arr3[k++]=arr2[j++];
   
   }
}

int printarr(int arr[],int k){
  for(int i=0;i<k;i++){
    cout << arr[i]<< " ";
  }
}
// to merge two sorted arrays

int main(){

int ujj1[9]={3,5,7,8,9,12,18,20,25};
int ujj2[6]={2,4,6,10,11,14};

int ujjwal[15];
merge(ujj1,9,ujj2,6,ujjwal,15);
printarr(ujjwal,15);
cout << endl;
cout << "everything is fine";

return 0;
}