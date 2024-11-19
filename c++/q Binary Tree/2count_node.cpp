#include<iostream> 
using namespace std;
// METHOD 1
void Total (Node* root , int &count){
if(root == NULL){
    return;
}

count++;
Total(root -> left , count);
Total(root -> right , count);
}

// method 2

int Totalnode(Node* root){

    if(root == NULL){
  return 0;
    }
  return(1+Totalnode(root -> left) +Totalnode(root -> right));
}


int main(){


}
