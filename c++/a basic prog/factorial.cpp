#include<iostream>
using namespace std;
int main()
{
cout << "enter the number";
int num, i=2 , ans=1;
cin >> num;
while(i <=num){
    ans*=i;
    i++;
}
cout << "the factorial of number " << num << " is ";
cout << ans;
return 0;

}