//*
//**
//***     program to print rectangle pattern with star
//****
//*****

#include<iostream>
using namespace std;
int main(){

    cout << "enter number of rows in traingle";
    int num;
    cin >> num;

    for (int i=1;i<=num;i++){
        for (int j=1;j<=i;j++){   // condition to when to print stars
            cout << "*";
        }
        cout << endl;
    }


return 0;
}




