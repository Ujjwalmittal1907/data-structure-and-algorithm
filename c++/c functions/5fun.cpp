// to get the ncr (concept of math)

#include<iostream>
using namespace std;
int ncr_fun(int n,int r){                 // concept used cnr= n!/(r!*(n-r)!)
    int v1=1;
    int v2=1;
    int v3=1;
    for(int i=n;i>=2;i--){                     // getting n!
      v1*=i;
    }

    for(int j=r;j>=2;j--){
         v2*=j;}                             // getting r!
        
    for(int k=(n-r);k>=2;k--){                // getting (n-r)!
         v3*=k;}

        int num = v1;                       // putting all values in formula 
        int den = v2*v3;
        int ans= num/den;
  return ans;
}

int main(){
    int a,b;
    cout << "enter the r in ncr";                              
    cin >> a;
    cout << "enter the r in ncr";
    cin >> b;
cout << "your ans is " << ncr_fun(a,b);
}