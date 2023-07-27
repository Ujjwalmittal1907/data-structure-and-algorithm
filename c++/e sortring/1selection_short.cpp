// selection short mai hamme  first element se compare karna start karenge jaise hi hame hamare element se 
// chotta element milega hame use and hamare starting element ko swap kara denge.



#include<iostream>
using namespace std;

 void sortingsearch(int arr[] , int size){
  for(int i=0 ;i<size-1 ; i++){
   int minindex=i;
   
  for(int j=+i ; j<size; j++){
if(arr[minindex]>arr[j]){
    swap(arr[minindex] , arr[j]);
}
}
}
}
int printarray(int arr[] ,int size){
for(int i=0 ;i<size ;i++){
cout << arr[i] << " ";
}

}
int main(){
int sortarray[6]={2,4,8,5,3,7};    // 2 3 4 5 7 8 

sortingsearch( sortarray ,6);
printarray(sortarray , 6) ;
cout << endl;
cout << "lets take one more example" << endl;

int sortarray2[5]={3,5,2,4,8};     // 2 3 4 5 8
sortingsearch( sortarray2 ,5);
printarray(sortarray2 , 5); 
cout << endl;
cout << "everything is finr" ;



}