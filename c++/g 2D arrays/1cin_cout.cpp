#include<iostream>
using namespace std;	
int main()
{
  /* int arr1[3][4];
   cout << "enter your matrix";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin >> arr1[i][j];
        }
    }
    cout << endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }*/

    int arr2[3][3]={{2,5,8},{6,8,9},{9,8,7}};
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}