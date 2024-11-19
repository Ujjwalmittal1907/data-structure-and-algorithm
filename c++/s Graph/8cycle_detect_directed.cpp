// we have used kah,s algorithm
#include<bits/stdc++.h>
bool isCyclic(vector<vector<int>>& edges, int V, int e)
{
	// Write your code here
	 vector<vector<int>>adj(V);
  for(int i =0; i<edges.size();i++){
    int u = edges[i][0];
    int v = edges[i][1];
    adj[u].push_back(v);
 }

  vector<int>indegree(V,0);
      for(int i =0; i<V;i++){
          for(int j =0; j<adj[i].size();j++){
              indegree[adj[i][j]]++;
          }
      }
      
      // 2. indegree 0 walo ko dalo
      queue<int>q;
      for(int i =0; i<V;i++){
          if(!indegree[i]){
              q.push(i);
          }
      }
      
      // jab tak q empty naa ho front nikalo uske neighbour ki indgree kam karo 
      while(!q.empty()){
          int node = q.front();
          q.pop();
          
          for(int i =0;i<adj[node].size();i++){
              indegree[adj[node][i]]--;
              if(!indegree[adj[node][i]]){
                  q.push(adj[node][i]);
              }
          }
         }   
          // agar indegree non zero hai to cycle hain....
          
          for(int i =0;i<V;i++){
              if(indegree[i] !=0){
                  return 1;
              }
          }
          return 0;
}
