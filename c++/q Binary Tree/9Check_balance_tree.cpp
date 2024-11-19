// balance tree ka meaning ye hai ke right nand left part of rrot ka subtraction 
// yaa to 0 ho yaa 1 or -1 
//   -1 <= height(l) - hright(R) <= 1;

 int height(Node *root , int&valid){
    if(!root){
        return 0;
    }

    int l = height(root -> left , valid);
    
    int r = height(root -> right , valid);
    if(abs(l-r) > 1){
        valid = 0;
        return 1+max(l,r);
    }
 }

  bool is_balance(Node *root){
    bool valid =1;
    height(root , valid);
    return valid;

  }