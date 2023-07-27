#include<iostream>
using namespace std;
 
 int printprime(int n){
    int prime;
  for(int i=3;i<=n;i++){
    for(int j=2;j<i;j++){
        if (i%j==0){
            break;
        }
        else{
            prime=i;
        }
        }cout << prime;
}
     } 
int main(){
    cout << "enter number before which prime no. u want to print ";
    int num;
    cin >> num;

    printprime(num);
    cout << " [prime no.s are ";
    
    return 0;
}