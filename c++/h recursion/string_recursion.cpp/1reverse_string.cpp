#include <iostream>
using namespace std;
void reverse_string( string& str , int s, int e){
    
if(s>e){
    return ;
}
swap(str[s] , str[e]);
s++;
e--;
reverse_string(str, s, e);


}
int main(){

 string str = "abcdef";
 cout << str << endl;
 cout << str[0] << str[2] << endl;
 int s =0;
 int e = str.size();
 cout << "size of str " << e << endl;

 reverse_string(str,s,e);
 cout << "reverse string is " << str  << endl; 
}