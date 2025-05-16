
void dijkstra(int start, vector<vector<pair<int, int>>>& adj, vector<int>& dist) {
    int n = adj.size();
    dist.assign(n, INT_MAX);
    dist[start] = 0;

    // Min-heap priority queue: (distance, node)
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (d > dist[u]) continue; // Skip outdated entries

        for (auto& edge : adj[u]) {
            int v = edge.first;
            int weight = edge.second;

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }
}


// STANDARD QUESTION ON DIJKSTRA ALGORITHM 

// 1. Shortest path in binary maze 

class Solution {
    public:
        int row[8] ={-1 , 0,0,1 , -1 ,-1 ,1 ,1};
        int col[8] ={0,-1,1,0 , -1,1,-1,1};
        bool isvalid(int a , int b ,int n,int m){
            if((a >= 0 && a < n) && (b >= 0 && b < m)) return true ;
            return false ;
        }
        int shortestPathBinaryMatrix(vector<vector<int>>& A) {
            int m = A.size();
            int n = A[0].size();
            int X = m-1 ; 
            int Y = n-1 ;
    
            queue<pair<int , pair<int,int>>>q;
            if(A[0][0] == 1) return -1 ;
            if(X== 0 && Y == 0) return 1 ;
            q.push({0,{0,1}});
            // vector<vector<bool>>visited(N , vector<bool>(M,0));
            A[0][0] = 2 ;
            while(!q.empty()){
                int i = q.front().first ;
                int j = q.front().second.first ;
                int step = q.front().second.second ;
                q.pop();
                for(int k = 0 ; k< 8;k++){
                    int newa = i+row[k];
                    int newb = j+col[k] ;
                    if( isvalid(newa , newb ,m ,n) && A[newa][newb] == 0){
                        
    
                            
                            if(newa == X && newb == Y) return step+1 ;  // destination check kera 
                            
                            A[newa][newb] = 2 ;
                            q.push({newa , {newb, step+1}}) ;
        
                    }
                }
            }
            return -1 ;
        }
    };

// 2. Path with minimum Efforts 
class Solution {
    public:
         int row[4] = {-1,0,0,1};
         int col[4] = {0,-1,1,0};
         int m ;
         int n ;
         bool isvalid(int a , int b){
            if((a>=0 && a < m) && (b >=0 && b< n)) return true ;
            return false ;
         }
        int minimumEffortPath(vector<vector<int>>& heights) {
             m = heights.size();
             n = heights[0].size();
            int x = m-1 ;
            int y = n-1 ;
         priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>> ,      greater<pair<int,pair<int,int>>> >q ;
           
        vector<vector<int>>visited(m , vector<int>(n,INT_MAX));
           q.push({0,{0,0}});
           visited[0][0] = 0 ;
           while(!q.empty()){
            int diff = q.top().first ;
            int a = q.top().second.first ;
            int b = q.top().second.second ;
            q.pop();
            if(a == x && b == y ) return diff ;
            for(int k = 0; k< 4;k++){
                int newa = a+row[k];
                int newb = b+col[k];
                if(isvalid(newa,newb)){
                        int newdiff =max(diff, abs(heights[a][b]-heights[newa][newb]));
                        if(newdiff < visited[newa][newb]){
                            visited[newa][newb] = newdiff ;
                            q.push({newdiff , {newa,newb}});
                        
                    }
                }
            }
           }
         return 0 ;
        }
    };


// 3. cheapest flight within k stops 

class Solution {
    public:
        int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
            vector<vector<pair<int,int> >>adj(n);
            for(int i = 0; i<flights.size();i++){
                int a = flights[i][0];
                int b = flights[i][1];
                int cost = flights[i][2];
                adj[a].push_back({b,cost});
            }
    
            priority_queue<pair<int,pair<int,int>> , vector<pair<int,pair<int,int>>> , greater<pair<int,pair<int,int>>>> q;
            q.push({0,{0,src}});  // {step , {cost , source}}
            vector<int>dist(n , INT_MAX);
            int count = 0 ;
            while(!q.empty()){
                int cnt = q.size();
    
                int step = q.top().first ;
                int cost = q.top().second.first ;
                int node = q.top().second.second ;
                q.pop();
                if(step > k) continue ;
                for(int i = 0; i< adj[node].size();i++){
                    int neighbour = adj[node][i].first ;
                    int newcost = cost+adj[node][i].second ;
                    if( newcost < dist[neighbour] &&  step <= k) {
                       dist[neighbour] = newcost ; 
                       q.push({step+1 , {newcost,neighbour}});
                    }
                    
                }
                
            }
            if(dist[dst] == INT_MAX) return -1 ;
            return dist[dst] ;
        }
    };

// 4. Network Delay Time

class Solution {
    public:
        int networkDelayTime(vector<vector<int>>& times, int n, int k) {
            vector<vector<pair<int,int>>> adj(n+1);
            for(auto& t : times){
                adj[t[0]].push_back({t[1], t[2]});
            }
    
            vector<int> dist(n+1, INT_MAX);
            dist[k] = 0;
    
            priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> q;
            q.push({0, k});
    
            while(!q.empty()){
                int tim = q.top().first;
                int node = q.top().second;
                q.pop();
    
                if(tim > dist[node]) continue;
    
                for(auto& [nei, wei] : adj[node]){
                    if(dist[nei] > tim + wei){
                        dist[nei] = tim + wei;
                        q.push({dist[nei], nei});
                    }
                }
            }
    
            int ans = 0;
            for(int i = 1; i <= n; ++i){
                if(dist[i] == INT_MAX) return -1;
                ans = max(ans, dist[i]);
            }
            return ans;
        }
    };
    