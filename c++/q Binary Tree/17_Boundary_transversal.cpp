/*4 function manege
pehla leaf node hai ki nahi batayega
left_boundary print kerna
leaf_node ko print kerna 
right boundary ko print kerna  */


class Solution {
public:

    bool leaf_node(Node* root){
        if(!root)
        return 0;
        
        return (!root -> left && !root-> right) ;
    }

    void left_boundary(Node* root , vector<int> & ans){
        if(!root){
            return ;
        }
        
        if( ! leaf_node(root) ){
            ans.push_back(root -> data);
            if    (root -> left) left_boundary(root -> left , ans);
            else   left_boundary(root -> right , ans);

        }
        return ;
        }
        
        void leaf_boundary(Node* main , Node* root , vector<int> & ans){
        if(! root){
            return ;
        }
        
        if(leaf_node(root) && main != root){
            ans.push_back(root -> data);
            return ;
        }
        if(root -> left ) leaf_boundary(main ,root -> left , ans);
        if(root -> right) leaf_boundary(main ,root -> right , ans);
        
        
    }
    
    void right_boundary(Node* root , stack<int>&temp){
        if(!root){
            return ;
        }
        
        if( ! leaf_node(root) ){
            temp.push(root -> data);
            if  (root -> right ) right_boundary(root -> right , temp);
            else right_boundary(root -> left , temp);
           }
           
           return ;
        }
        
    vector <int> boundary(Node *root)
    {
        //Your code here
        
        
        vector<int> ans ;
        if(!root){
            return ans ;
        }
        
        ans.push_back(root -> data);
        stack<int> temp;
        
        left_boundary(root -> left , ans);
        leaf_boundary(root , root , ans);
        right_boundary(root -> right ,  temp);
        
        while(! temp.empty()){
            ans.push_back(temp.top());
            temp.pop();
        }
        
        return ans;
    }
};