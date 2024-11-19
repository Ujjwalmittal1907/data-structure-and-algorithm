#include<iostream>
using namespace std;

int NonLeaf(Node *root){

    if(root == NULL){
        return 0;
    }
    if(!root -> left && !root -> right){
        return 0;
    }

    return(1 + NonLeaf(root -> left) + NonLeaf(root -> right));
}
int main(){


}