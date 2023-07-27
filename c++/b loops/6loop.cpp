//  *********
//  *       *   program to print hollow rectangle through *
//  *********
#include<iostream>
using namespace std;
int main(){


cout << "enter no of rows and columns";
int row, column;
cin >> row >> column;    // input number rows and columns required in our pattern


for (int i=1 ;i<=row ;i++){
    for(int j=1;j<=column; j++){
        if (i==1 || j==1 || i == row || j == column ){
            cout << "*";                         // condition to print star 
        }
       else { cout << " ";}                      // condition to print space(_)
    }
 cout << endl;
}

return 0;
}
