// #include <iostream>
// using namespace std;	
// int main()
// {
//     int a;
//     cout << "enter your prime ";
//     cin >> a;
//        int ans=0;
//     for (int i=2; i<a/2;i++){
//         if (a%i==0){
//             cout << "this is not prime";
//             ans =1;
//             break;
//         }
//     }
//     if (ans ==0){
//         cout << "it is a prime";
//     }

//     return 0;
// }

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


void countprime(int m){  
                                    // countprime counts all the number which are prime...
    int count=0;
    for(int i=2;i<=m;i++){
        if (isprime(i)){
           cout << i << " ";
            count++ ;
        }
    }
    cout << endl << "total primes number are: " <<  count;
}

 

int main()
{
  
     cout << endl;
     cout << "enter your number";
     int num;
     cin >> num;
     countprime(num);
    return 0;
}

/*this code is not effective as the timew complexity of the code is O(n^2) 
hence it will trl when the number is big for example  number is 500000.  
to optimise our code we will use approach of "sieve of eratosthers"

How this approch will work */