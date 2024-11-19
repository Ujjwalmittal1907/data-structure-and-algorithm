class Solution {
public:

    void pairpar(int n , int left,int right , vector<string> &ans , string &temp){
      
        if(left + right == 2*n){
            ans.push_back(temp) ;
            return ;
        }

      // left parantheses insert karo
      if(left <n){
        temp.push_back('(');
        pairpar( n , left+1,right , ans,temp);
        temp.pop_back();
      }

      // righht ko daalo
      if(right < left){
         temp.push_back(')');
        pairpar( n , left,right+1 , ans,temp);
        temp.pop_back();
      }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;

        pairpar(n ,0,0,ans,temp);
        return ans;
        
    }
};