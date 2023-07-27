#include<iostream>
using namespace std;
int main ()
{
   int marks ;
   cout << "enter the marks obtainerd by student:-";
   cin >> marks ;
   if (marks>80)
   { if (marks>90){
     
   cout << "pass , excellent performance";
    }
    else {cout << "pass ,good performance";}
    cout << endl ;

   }
   else if (marks >60){
    cout << "pass ,well done" << endl;
   }
   else if (marks>33){
    cout << "pass" << endl;
   }
   else {
    cout << "fail";
   }
   return 0;

}