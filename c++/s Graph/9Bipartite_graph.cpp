#include<queue>

bool isGraphBirpatite(vector<vector<int>> &adj) {
	// Write your code here.
		int v = adj.size();

	vector<vector<int>>edges(v);

	for(int i = 0 ; i<v;i++){
		for(int j = 0 ; j<adj[0].size();j++){
			if(adj[i][j] == 1){
				edges[i].push_back(j);
				edges[j].push_back(i);
			}
		}
	}
    queue<int>q;
	vector<int>color(v,-1);


	q.push(0);
	color[0] = 0;

	while(!q.empty()){
		int node = q.front();
	     q.pop();
		for(int j = 0; j<edges[node].size();j++){
			if(color[edges[node][j]] == -1){
				q.push(edges[node][j]);
			color[edges[node][j]] = (color[node]+1)%2;
			}

			else{

				if(color[edges[node][j]] == color[node]){
					return 0;
				}
			}
		}
	}
		

	return 1;
}


// by using dfs
#include <bits/stdc++.h> 
bool check(int node, int col, vector<int>adj[], int color[])
{
    color[node]=col;
    for(auto it:adj[node])
    {
        if(color[it] == -1)
        {
            if(check(it,!col,adj,color)==false)
                return false; 
        }
        else if(color[it] == color[node])
            return false;
    }
    return true;
}
bool isBipartite(int n, vector<vector<int>> &edges)
{
    vector<int>adj[n];
    for(auto it:edges)
    {
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
    }

    int color[n];
    for(int i = 0; i < n; i++)  color[i]=-1;

    for(int i = 0; i < n; i++)
    {
        if(color[i] == -1)
        {
            if(check(i,0,adj,color)==false)
                return false;
        }
    }
    return true;
}