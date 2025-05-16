class Solution {
  public:
    /*  Function to implement Bellman Ford
    *   edges: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */                               
    vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        // Code here
        vector<int> dist(V,1e8);
        int size = edges.size();
        
        dist[S] = 0;
        
        
        for(int j = 0; j< V-1; j++){
            for(int i = 0; i< size;i++){
                
                int u = edges[i][0];
                int v = edges[i][1];
                int weight = edges[i][2];
                
                if(dist[u] == 1e8){
                    continue;
                }
                
                if(dist[u] + weight < dist[v]){
                    dist[v] = dist[u]+ weight;
                }
                
            }
        }
        
        
        //   chalo cycle detect kerte hai 
        //   agar dist vector mai kuch bji change hota hai matlab cycle hai 
        //   isme jo negative weighted hain
        
        for(int z = 0 ; z< size ;z++){
                int u = edges[z][0];
                int v = edges[z][1];
                int weight = edges[z][2];
                
                if(dist[u] == 1e8){
                    continue;
                }
                
                if(dist[u] + weight < dist[v]){
                    vector<int>ans;
                    ans.push_back(-1);   // return {-1}
                    return ans;
                }
            
        }
        
        return dist;
    }
};
