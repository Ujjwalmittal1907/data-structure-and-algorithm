// kahn's algorithm

// 1.find the indegree of nodes
// 2.push the node in queue having indegree 0
// 3.pop the top element the decrease the indegree of its neighbour by 1.
// 4.push element having whose indegree become zero..

#include<bits/stdc++.h>
vector<int> topologicalSort(vector<vector<int>> &graph, int edges, int V) {

    vector<vector<int>>adj(V+1);
    for(int i = 0; i< edges;i++){
        adj[graph[i][0]].push_back(graph[i][1]);
    }

     
	    vector<int>indegree(V,0);
	    for(int i = 0; i<V;i++){
	        for(int j =0; j<adj[i].size();j++){
	            indegree[adj[i][j]]++;
	        }
	    }
	     queue<int>q;
	     vector<int>ans;
	    // zero indegree element ko push karte hain queue mai
	    
	    for(int i =0; i< V;i++){
	        if(!indegree[i]){
	            q.push(i);
	        }
	    }
	    
	    // jab tak queue empty naa ho pop karo element
	    while(!q.empty()){
	        int node = q.front();
	        q.pop();
	        ans.push_back(node);
	        
	        // neighbours ki indegee ko ek se ghatao and phir se jo zero hu queue mai dala
	        
	        for(int i =0; i<adj[node].size();i++){
	            indegree[adj[node][i]]--;
	       
	            if(!indegree[adj[node][i]]){
	                q.push(adj[node][i]);
	            }
	        }
	        }
	        
	        return ans;


}
