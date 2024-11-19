#include<iostream>
using namespace std;
 
 int printprime(int n){
    
  for(int i=3;i<=n;i++){
    int p=1;
    for(int j=2;j<i;j++)
    {
        
        if (i%j==0){
            p=0;
            break;
        }}
       if(p==1){
        cout << i << endl;
       }
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