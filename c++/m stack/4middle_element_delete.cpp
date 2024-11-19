#include<iostream>
#include<stack>
using namespace std;

void delete_middle(stack <int>s){
 stack <int> temp;

 int len = s.size();
 int mid;
 if(len%2 ==0){
  mid = len/2;
 }
 else{
    mid = len/2 +1;
 }

 int count =0;
 while(count < mid){
    temp.push(s.top());
    s.pop();
    count++;
 }

 s.pop();

 while(! temp.empty()){
    s.push(temp.top());
    temp.pop();
 }



}

int main(){

stack<int> s;
s.push(9);
s.push(3);
s.push(5);
s.push(6);
s.push(1);

cout << "size" <<  s.size() << endl;
int p = s.size();

for(int i=0 ; i <=p ; i++){
    cout << s.top() << " ";
    s.pop() ;

}
cout << "after delete";
delete_middle(s);
for(int i =0 ; i <=p ; i++){
    cout << s.top() << " ";
    s.pop();
}

}