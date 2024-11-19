void Mirror_tree(Node *root){
if(root ==NULL){
    return ;
}
    Node *temp = root -> right;
    root -> right = root -> left;
    root -> left = temp;
    Mirror_tree(root -> left);
    Mirror_tree(root -> right);
}