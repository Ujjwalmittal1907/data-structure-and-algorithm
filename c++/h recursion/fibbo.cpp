#include<iostream>
using namespace std;

int fibbo(int n){
 // recursive base

 if (n==0){
    return 0 ;
 }
 if (n==1){
    return 1 ;
 }

 // recursive solution
 int a =  fibbo(n-1) ;
 int b = fibbo(n-2); 
 int ans = a + b ;
 return ans;
} 

void fibboprint(int n){

    // recursive base
    if(n==0){
       cout << 0 ;
       return;
    }
    // r.s
    fibboprint(n-1);
    int ans = fibbo(n);
    cout << ans;
    
   
    
}



int main(){
int n;
cin >> n;
int m=0;


fibboprint(n) ;






}