/* ek queue lele q and q mai push root 
jab tak queue khaali naa ho --> 
1. top element pop and print it 
2. iska left queue mai and then right q mai */


class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> arr;
         if (!root) 
            return arr; 
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* temp ;
        while(!q.empty()){
            int n = q.size();
            vector<int> ans;
            while(n--){
             temp = q.front();
            ans.push_back(temp -> val);
            q.pop();
            if(temp -> left)  q.push(temp -> left);
             if(temp -> right) q.push(temp -> right);
            }
            arr.push_back(ans);
            }
        return arr ;
    }
};