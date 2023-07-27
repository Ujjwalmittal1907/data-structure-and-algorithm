//*****
//****         program to print downward traingle using star(*)
//***
//**
//*

#include<iostream>
using namespace std;
int main()

{                            // entering number of rows in our traingle
    cout << " enter the no. of rows";
    int row;
    cin >> row;
for (int i=row;i>=1;i--){
    for (int j=1;j<=i;j++){   // condition when to print star
        cout << "*";
    }
    cout << endl;
}


}