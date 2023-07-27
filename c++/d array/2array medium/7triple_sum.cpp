 /* Problem on problem in which we have to find three number having specific sum on adding them  */

#include<iostream>
using namespace std;

void sorting(int arr[] , int size,int key){
    for (int i=0;i<size-2 ;i++){         // dry runinng we get that 

        for (int j=i+1; j< size-1 ;j++){
            for (int k=j+1; k<size ;k++){
                if(arr[i]+arr[j]+arr[k]==key){

                    cout << "three elements having sum = " << key << "is  ";
                    cout << arr[i] << " " << arr[j] << " " << arr[k];
                    cout << endl;
                }
            }
        }
    }
}
int main()
{
 int firarr[5]={7,2,-8,1,4};  // // 7 2 1
 sorting( firarr ,5,10);
 cout << endl ;
 cout << "next example" << endl;

 int sec_arr[7]={2,10,8,6,4,7,5};
  sorting( sec_arr ,7,12);
  cout << endl;

  
 int thir_arr[7]={2,10,8,6,4,7,5};
  sorting( thir_arr ,7,20);
  cout << endl;
 cout << "everything is fine";
 return 0;
}