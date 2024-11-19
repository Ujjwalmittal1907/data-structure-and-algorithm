#include<iostream>
using namespace std;

int Height_BT(Node *root){

    if(root == NULL){
        return 0;
    }

    return(1+max(Height_BT(root ->left) + Height_BT(root -> right)));

}

// code by love babbar
 int height(struct Node* node){
        // code here 
        if (node == NULL){
            return 0;
        }
        int left = height(node -> left);
        int right = height(node -> right);
        
        int ans = 1+ max(left , right);
        return ans;
        
    }
int main(){



}