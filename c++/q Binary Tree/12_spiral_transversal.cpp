/* two stack lenge s1 and s2  root ko s1 mai daalo
jab tak s1 khaali naa ho -->  print karte jao and  s2 mai daalo pehle left then right 
jab tak s2 khaali naa ho -->  print karte jao and s1 mai daalo pehlr right then left */


class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
         if( !root)
            return ans;

        stack<TreeNode*>s1 ;
        stack<TreeNode*>s2;

        s1.push(root);

        while( !s1.empty() || !s2.empty()){
            vector<int> arr;
            if( !s1.empty()){
                while(!s1.empty()){
                    TreeNode* temp = s1.top();
                    s1.pop();
                    arr.push_back(temp -> val);
                    if(temp -> left ) s2.push(temp -> left);
                    if(temp -> right) s2.push(temp -> right); 
                }
                ans.push_back(arr);
            }

            else{
                 while(!s2.empty()){
                    TreeNode* temp = s2.top();
                    s2.pop();
                    arr.push_back(temp -> val);
                    if(temp -> right) s1.push(temp -> right); 
                    if(temp -> left ) s1.push(temp -> left);
                    
                }
                ans.push_back(arr); 
            }
        }
        return ans;
        
    }

};