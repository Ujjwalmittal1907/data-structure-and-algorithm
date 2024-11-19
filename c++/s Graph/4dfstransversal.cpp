
// dfs algorithm 


void dfs(int node ,  vector<int>edges, vector<int> &ans ,vector<bool> &visited ){
    visited[node] =1;
    ans.push_back(node);
    for(int i = 0; i< edges[node].size();i++){
        if(!visited[edges[node][i]]){
        
        dfs(edges[node][i] , edges , ans , visited);
        }

    }

}

vector<vector<int>> depthFirstSearch(int V, int E, vector<int>edges)
{
    // Write your code here

    vector<int> ans;
    vector<bool>visited(V,0);
    for(int i = 0; i< v;i++){
        if(!visited[i]){
   dfs( 0 , edges , ans, visited);
        }
    }
    
    return ans;
}