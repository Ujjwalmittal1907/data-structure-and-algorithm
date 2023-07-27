#include<iostream>
using namespace std;
 int gcd(int a,int b){

    if (a==0){
        cout << b;
    }
     if (b==0)
    {
        cout << a;
    }
    else{while(a!=b){
      
      if(a<b){
       b=b-a;}
       else{a=a-b;}
       }
    
    }}
int main(){

    int a,b;
    cout << "ennter the two numbers";
    cin >> a>> b;
   int  ans=gcd(a,b);
    cout << "gcd of given number is " << ans ;
    return 0;
}