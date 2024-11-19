#include<iostream>
using namespace std;

void print(int i){
    cout << "this is for int " << i << endl;
}
void print(double k){
    cout << "this is for int " << k;
}
int main(){
    print(10);
    print(20.22);
}