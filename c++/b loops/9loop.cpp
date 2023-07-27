// 12345
// 12345  program to print rectandle with column number 
// 12345
#include<iostream>
using namespace std;
int main ()
{
    int a;
    cin >> a;
    for (int i=1;i<=a; i++){
    for (int j =1 ;j<=a;j++){    // condition for printing column number
      cout << j ;
    }
    cout << endl ;


    }

  return 0;

}