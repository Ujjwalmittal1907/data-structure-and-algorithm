


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

int wave_print(int arr[][3],int row,int col){

    for(int i=0;i<col;i++){
        if (i%2==0){
            for(int j=0;j<row;j++){
                cout << arr[j][i] << " ";
            }
        }

        else{
            for(int j=row-1;j >= 0;j--){
                cout << arr[j][i] << " ";
            }
        }
    }
}


int main()
{
    cout << "enter your array "<< endl;
    int arr1[3][3];
    input_arr(arr1,3,3);
    cout << endl;
    cout << "your entered array is" << endl;
    print_arr(arr1,3,3);

    cout << endl;
    cout << "your elements in wave for";
  wave_print(arr1,3,3);
    return 0;
}

// if we talk about the time complixity then we see we transverse each elements only ones .
// Time complixity ho gai O(N*M),