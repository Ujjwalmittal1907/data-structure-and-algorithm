// printing a hollow rectangle with column number 

#include<iostream>
using namespace std;
int main()
{
int a;
cin >>a;
for (int i =1 ;i<=a;i++){
    for (int j=1 ;j<=a; j++){
        if(i==1 || j==1 || i==a || j==a){
            cout << j ;
        }
        else{
            cout << " ";
        }
    }
    cout << endl;
}

return 0 ;
}
