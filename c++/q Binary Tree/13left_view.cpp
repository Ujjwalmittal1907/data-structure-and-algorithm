#include<iostream>
using namespace std;

vector<int> leftview(Node* root){

 queue<Node*> q;
 q.push(root);
 vector<int>ans;

 while(q.size()){
    int n = q.size();
    ans.push_back(q.front());


    while(n--){
        Node* temp = q.front();
        q.pop();

        if(temp -> left){
            q.push_back(temp -> left);
        }
        if(temp -> right){
            q.push_back(temp -> right);
        }

    }
 }
 return ans;


}
int main(){



}