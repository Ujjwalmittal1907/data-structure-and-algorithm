#include<iostream>
using namespace std;

void countleaf(Node *root , int& count){
    if(root == NULL){
        return;
    }
   if(!root -> left && !root -> right){
    count++;
    return ;
   } 
   countleaf(root -> left; count);
   countleaf(root -> right, count);

}

// approach 2
int CountLeaf(Node * root){

    if(root == NULL){
        return 0;   
         }
    if(!root -> left && !root -> right){
        return 1;
    }

    return(CountLeaf(root ->left) + CountLeaf(root -> right));


}
int main(){

}