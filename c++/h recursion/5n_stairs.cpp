#include<iostream>
using namespace std;

// long long climbstarirs(long long n){
//  // recursive base

//  if (n==0){
//     return 1 ;
//  }
//  if (n==1){
//     return 1 ;
//  }

//  return fibbo(n-1) + fibbo(n-2);
// } 

// using for loop 
void climbstairs(long long n){
        long long s1 = 1;
        long long s2 = 1;
        for(int i = 2;i<=n;i++){
            long long temp = s2;
            s2 = s1+s2;
            s1 = temp;
        }

        cout << s2 << endl;
}

// but jab hum recursion se ye problem solve karte hai to tle ki dikkat aati 
// hain so dp mai phir se ye question karenge
int main(){
   climbstairs(22) ;
    climbstairs(15) ;

       climbstairs(35) ;
        climbstairs(49) ;



}