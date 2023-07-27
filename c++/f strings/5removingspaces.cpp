#include <iostream>
using namespace std;	
char alterspace(string s){
    string temp="";
    for(int i=0; i<s.length();i++){
        if (s[i] == ' '){
            temp[i] ='@';
        }
        else{temp[i]=s[i];
        }
    }
         for (int i=0;i < temp.length();i++){
            cout << temp[i];
         }
    
}
int main()
{
    cout << "enter your string" << endl ;
    string s1;
     getline(cin,s1);
     cout << "your string before operation  "<< s1 << endl;
     alterspace(s1);
     cout << endl;
     cout << "your string after alter  " <<  s1 << endl;
    return 0;
}