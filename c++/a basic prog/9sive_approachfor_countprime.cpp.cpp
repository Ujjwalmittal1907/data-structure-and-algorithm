#include <iostream>
using namespace std;	

int countprime(int num){
    int count=1;
    for(int i=2;i<=num;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                return false;
                break;
            }
            return true;
        }
        if(true){
            count++;
        }
    }
    return count;
}
int main()
{
    cout << "enter the number";
    int n;
    cin >> n;
    cout << "number of prime number before " << n << " are" ;
    cout << countprime(n);
    return 0;
}