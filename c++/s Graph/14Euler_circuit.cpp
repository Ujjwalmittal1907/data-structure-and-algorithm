//euler path :- all edges should be transversed once 
    // 1. calculate degree of each node.
    // 2. zero or two node can have odd degree and remaing have even degree
    // 3. all non zero degree node should be connected;

// euler circuit :- all edges shold br=e transversed once and start == end;
//   1. find degree of node 
//   2. if degree of any node = odd (not a euler circuit)
//   3. if even (apply dfs from any non zero node )

#include<iostream>
#include<vector>
using namespace std;

void dfs(int node , vector<int>&visited , vector<int>adj[]){
	visited[node] = 1;

	for(int j =0; j<adj[node].size();j++){
		if(!visited[adj[node][j]]){
			dfs(adj[node][j] , visited , adj);
		}
	}
}

vector<int> printEulerPath(int n, vector<vector<int>> &edgeList) {

	vector<vector<int>>adj(n);
	int m = edgeList.size();


    // adj list bana ujjwal
	for(int i = 0; i<m ;i++){
		adj[edgeList[i][0]].push_back(adj[edgeList[i][1]]);
		adj[edgeList[i][1]].push_back(adj[edgeList[i][0]]);
	}

	// chalo degree nikalte hain

	vector<int>deg(n,0);
	int odd =0;
	for(int i = 0; i<n;i++){
		deg[i] = adj[i].size();
		if(deg[i]%2){
			odd++;
		}
	}

	if( odd != 0 && odd != 2)
	  return -1;

	// chalo dekh sare connected hai yaa nhi 
	vector<bool>visited(n,0);

	for(int i = 0; i< n;i++){
		if(deg[i]){ 
		dfs(i , visited , adj[]);
		 break;
		 }
	}
	// dekh non degree wala disconnected to nhi
	for(int i = 0; i<n;i++){
		if(deg[i] && !visited[i]){
			return -1   ;
		}
	}

  return 1;
	

}


