#include<bits/stdc++.h>

#include<iostream>
#include<stack>
#include<vector>
 // topological function 
void topological(int node , vector<bool> &visited , stack<int> &s , vector<vector<int>>adj){
   
   visited[node] =1;

   for(int i = 0; i<adj[node].size();i++){
	   if(!visited[adj[node][i]]){
		   topological(adj[node][i] , visited,s,adj);
	   }
   }
   s.push(node);
}

vector<int> topologicalSort(vector<pair<int,int>>& edges, int n, int M)
{
	// chalo adjancy list banate hain 
	vector<vector<int>>adj(n+1);
	vector<bool>visited(n+1,0);
	stack<int>s;

	// adjency list banai 
	for(int i = 0; i<M;i++){
		int u = edges[i].first;
		int v = edges[i].second;
		adj[u].push_back(v);
	}
	// topolgical ko call karo
	
   for(int i = 1; i<=n;i++){
	   if(!visited[i]){
		   topological(i , visited , s , adj);
	   }
   }
   // jo stack mai pade hai unhe answer mai lao 
   vector<int>ans;

   while(!s.empty()){
	   ans.push_back(s.top());
	   s.pop();

   }
   return ans;
} 
