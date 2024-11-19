#include<iostream> 
using namespace std;
bool is_palidrome(string str, int s, int e){
    if(s > e){
        return 1;
    }

    if(str[s] != str[e]){
        return 0 ;
    }
    s++;
    e--;
    is_palidrome(str, s,e);
}
int main(){

    string str = "abcdcba";

    int s =0;
    int e = str.size()-1;

   cout << is_palidrome(str , s ,e) << endl;

   if (is_palidrome(str,s,e))
    cout << "Yes" << endl;
    else
    cout << "No" << endl;

    string str2 = "noob";

    if (is_palidrome(str2, 0, 3)){
    cout << "Yes";}
    else{
    cout << "No" ;                                                                                       
    }


}