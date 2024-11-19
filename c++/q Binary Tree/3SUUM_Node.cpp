#include<iostream> 
using namespace std;
// METHOD 1
void TotalSum(Node* root , int& sum){
if(root == NULL){
    return;
}

 sum+= root -> data;
TotalSum(root -> left,count);
TotalSum(root -> right , count);
}

// method 2

long int Totalsum(Node* root){

    if(root == NULL){
  return 0;
    }
  return( root -> data + Totalsum(root -> left) + Totalnode(root -> right));
}


int main(){
    Node* root = NULL;
    int sum =0;


}
