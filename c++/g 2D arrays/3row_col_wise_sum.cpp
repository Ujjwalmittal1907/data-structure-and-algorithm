 /* this program covers the function 1) which take input from user
 2) then print the input in matrix form 
 3) find the sum of all individual rows
 4) and finally then find the largest sum in thoses row sum */

#include <iostream>
using namespace std;

int  input_arr(int arr[][3],int row,int col){
    for(int i=0; i<row;i++){                             // to input a 2D matrix
        for(int j=0;j<col;j++){
            cin >> arr[i][j];
        }
    }
}

int print_arr(int arr[][3],int row,int col){
     for(int i=0; i<row;i++){              // to print the matrix taken from the user
        for(int j=0;j<col;j++){
            cout <<  arr[i][j] << "  ";
        }
        cout << endl;
    }
}

int getrow_sum(int arr[][3],int row,int col){
    int singlearr[row-1]={0};
   
    for(int j=0;j<row;j++){
         int sum=0;
    for(int i=0;i<col;i++){          // to get the sum of individual rows
        sum+= arr[j][i];
   }
    singlearr[j]=sum;
}

for (int i=0;i<row;i++){
    cout << singlearr[i] << " ";
}
}

int largest_rowsum(int arr[][3],int row,int col){
      int singlearr[row-1]={0};
   
    for(int j=0;j<row;j++){
         int sum=0;                          // this function returns the largest row sum ..... 
    for(int i=0;i<col;i++){
        sum+= arr[j][i];
   }
    singlearr[j]=sum;
}

int largest=-1;
for (int i=0;i<row;i++){
    if (largest < singlearr[i]){
        largest= singlearr[i];}
}
 return largest;
}

int main()
{

 int arr1[4][3];
 cout << " enter your matrix";

 input_arr(arr1,4,3);

 cout << "your array is " << endl;
 print_arr(arr1,4,3);
 cout << "the sum of row are " << endl;
 cout << getrow_sum(arr1,4,3) << endl ;
  cout << "the largest row sum is" << endl;

 cout << largest_rowsum(arr1,4,3);

    return 0;
}