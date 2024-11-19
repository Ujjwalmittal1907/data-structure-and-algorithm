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

        
        if(temp -> right){
            q.push_back(temp -> right);
        }
        if(temp -> left){
            q.push_back(temp -> left);
        }

    }
 }
 return ans;


}
int main(){



}


// chalo recursive tarike se karte hain 

void rightview(Node* root , vector<int>&ans , int level){

    if(! root){
        return ;
    }

    if(ans.size() == level){
        ans.push_back(root -> data);
    }

    rightview(root -> right , level+1 , ans);
    rightview(root -> left , level+1 , ans);
}