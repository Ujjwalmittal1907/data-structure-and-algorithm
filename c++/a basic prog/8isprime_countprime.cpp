#include <iostream>
using namespace std;

bool isprime(int n){
    if (n<=1){
        return false;               // this function check wether a particular number is a prime or not
    }

    for(int i=2;i<n;i++){
        if(n%i==0){
           return false; 
            break;
        }
    }
    return true;
}

int countprime(int m){                   // countprime counts all the number which are prime...
    int count=0;
    for(int i=2;i<=m;i++){
        if (isprime(i)){
            count++;
        }
    }
    return count;
}

int main()
{
   /* cout << "enter your number";
     int n;
     cin >> n;

     if(isprime(n)){
        cout << "yaa! it is a prime number";
     }
     else{
        cout << "it is not a prime a number";
     }
*/
     cout << endl;
     cout << "enter your number";
     int num;
     cin >> num;
     cout << countprime(num);
    return 0;
}

/*this code is not effective as the timew complexity of the code is O(n^2) 
hence it will trl when the number is big for example  number is 500000.  
to optimise our code we will use approach of "sieve of eratosthers"

How this approch will work */