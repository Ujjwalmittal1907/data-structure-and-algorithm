#include<iostream> 
using namespace std;
#include<stack>

int main(){

string name ="lattim_lawjju";
string ans ="";

stack<char> s;

for(int i=0 ; i < name.length();i++){
    s.push(name[i]);
}

while( !s.empty() ){
  char ch = s.top();
  ans.push_back(ch);
  s.pop();
}
cout << ans;



}