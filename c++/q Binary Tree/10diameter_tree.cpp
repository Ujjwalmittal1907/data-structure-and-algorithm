// diameter of tree is defined as the longest path between any two leaf node

                
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


int diameter(node* root){
    if(root == NULL){
        return 0;
    }

   int left = diameter(root -> left);
   int right = diameter(root -> right);
   int both = (1+ height(root -> left) + height(root -> right));
   int ans = max(left , max(right , both));
   return ans;
}

 // here time complexity become O(n^2) so this is not fair