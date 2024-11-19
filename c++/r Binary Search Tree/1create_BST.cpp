#include<iostream>
using namespace std;

class node{
    public :
    int data ;
    node* left;
    node* right;

    // constructor
    node(int value){
        data = value;
        this -> left = NULL;
        this -> right = NULL;
    }
};
node* insert(node* root , int target){
    if(root == NULL){
        node* temp = new node(target);
       return temp;
    }
    if(target < root -> data){
      root-> left =   insert(root -> left , target);
    }

    else{
        root -> right = insert(root -> right , target);
        
    }
    return root;
}
// time complexity of insertion in bst is O(logN)

bool search(node* root , int x){
    if(root == NULL){
        return false;
    }
    if(root -> data == x){
        return true;
    }
    if(root-> data < x){
        return search(root -> right , x);
    }
    else{
        return search(root -> left , x);
    }
}

//
bool search2(node* root , int x){
    node* temp = root;
    while(temp != NULL){
        if(temp -> data == x){
            return true;
        }
        if(temp -> data < x){
            temp = temp -> right;
        }
        else{
            temp = temp -> left;
        }
    }
    return false;
}

int minimum(node* root){
    node* temp = root;
    int ans;
    while(temp!= NULL){
        ans = temp -> data;
        temp = temp -> left;
    }
    return ans;
}

int maximum(node* root){
    node* temp = root;
    int ans;
    while(temp!= NULL){
        ans = temp -> data;
        temp = temp -> right;
    }
    return ans;
}

void inorder(node* root){
    if(root == NULL){
        return;
    }
    cout << root -> data << " ";
    inorder(root -> left);
    
    inorder(root -> right);
}

node* deleteFromBst(node* root , int val){
    // base case 
    if(root == NULL){
        return root;
    }
    if(root -> data == val){
        // o child 
        if(root -> left == NULL && root -> right == NULL){
            delete root;
            return NULL;
        }

        // 1 child
        // left
        if(root -> left != NULL && root -> right == NULL){
            node* temp = root-> left;
            delete root;
            return temp;
        }
        // right 
         if(root -> left == NULL && root -> right != NULL){
            node* temp = root->right;
            delete root;
            return temp;
        }

        // 2child
        if(root-> left != NULL && root -> right != NULL){
            int mini = minimum(root -> right);
            root -> data = mini;
            root -> right = deleteFromBst(root -> right , mini);
            return root;
        }

        else if(root -> data > val){
            root -> left = deleteFromBst(root -> left , val);
            return root;
        }
        else{
            root -> right = deleteFromBst(root -> right , val);
            return root;
        }

    }
}
int main(){
int arr[]= {2,9,10,3,4,8,11};
node* root = NULL;
for(int i = 0; i< 7;i++){
  root = insert(root , arr[i]); 
  }
  inorder(root);
cout << endl << "Searching in bst" << endl;
cout << search(root , 10) << endl;
cout << search(root , 15) << endl;
cout << search2(root , 10) << endl;
cout << search2(root , 15) << endl;
cout << minimum(root) << endl;
cout << maximum(root) << endl;

cout << endl << endl ;
cout << deleteFromBst(root,8) << endl;
 inorder(root);

}