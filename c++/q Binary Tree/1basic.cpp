#include<iostream>
using namespace std; 

class node{
    public:
    int data;
    node* left;
    node* right;

    // constructor 

    node(int data){
       this -> data = data;
       right = NULL;
       left = NULL;
        
    }

    
};

node* buildTree(){
        cout << "enter the data";
        int data;
        cin >> data;
        if(data == -1){
            return NULL;
        }
        node* root = new node(data);
        cout << "enter the data for inserting in the left of tree " << data << " " << endl;
        root -> left = buildTree();
        cout << "enter the data for inserting in the right of tree " << data << " " << endl;
        root -> right = buildTree();
        return root;

    }

    void inorder(node *root){
        
        if(root == NULL){
            return ;
        }
        inorder(root -> left);
        cout << root -> data << " ";
        inorder(root -> right);

    }
    void preorder(node * root){
      if(root == NULL){
            return;
        }  
        cout << root -> data << " ";
        inorder(root -> left); 
        inorder(root -> right);
    }

     void postorder(node * root){
      if(root == NULL){
            return  ;
        }  
        
        postorder(root -> left); 
        postorder(root -> right);
        cout << root -> data << " ";
    }

int Totalnode(node* root){

  if(root == NULL){
  return 0;
    }
  return(1+Totalnode(root -> left) +Totalnode(root -> right));
}


int nodesum(node* root){
    if(root == NULL){
        return 0;
    }
    return (nodesum(root-> left) + nodesum(root-> right) + (root-> data));
}

int leafnode(node* root){
    if(root == NULL){
        return 0;
    }
    if(root -> left == NULL && root -> right == NULL){
        return 1;
    } 
    return(leafnode(root -> left) + leafnode(root -> right));
}

int height_BT(node* root){
    if(root == NULL){
        return 0;
    }

    return (max(height_BT(root -> left) , height_BT(root -> right)) +1);
}

int main(){



node* root = buildTree();
cout << "preorder";
preorder(root);
cout << endl;
cout << "inorder  ";
inorder(root);
cout << endl;
cout << "Postorder " ;
postorder(root);
cout << endl;
cout << "number of nodes " << Totalnode(root) << endl;
cout << "sum of nodes " << nodesum(root) << endl;
cout << "no. of leafnodes " << leafnode(root) ;
cout << "height of bt " << height_BT(root) << endl ;
}
