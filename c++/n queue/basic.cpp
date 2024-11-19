#include<iostream>
#include<queue>
using namespace std;
int main(){

queue <int> q;
q.push(5);
q.push(7);
q.push(10);
cout << "size" << q.size() << endl;

q.pop();
cout << "now size" << q.size() << endl;
cout << "what " << q.empty() << endl;
q.pop();
q.pop();
cout << "now " << q.empty();


}