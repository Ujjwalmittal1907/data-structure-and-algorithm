#include<iostream>
#include<algorithm>
using namespace std;


bool cmp(vector<int>&a ,  vector<int> &b){
  return a[2] <b[2];
}

 void makeset(vector<int> &parent , vector<int> &rank,int n){
    for(int i = 0; i<n;i++){
      parent[i] = i ;
    }
    }

  int find_ult_parent(vector<int>&parent,int node){
    if(parent[node] == node){
      return node ;
    }
    // return  find_ult_parent(parent , parent[node]);
    // compresion lagane ke liye
      return parent[node] = find_ult_parent(parent , parent[node]);
}

 void unionset(int u , int v, vector<int>&parent,vector<int>& rank){

  // find ultimate parent of u and v......
   u = find_ult_parent(parent,u);
   v = find_ult_parent(parent,v);
  
   if(rank[u] < rank[v]){
     parent[u] = v;
   }
   else if(rank[v] < rank[u]){
     parent[v] = u ;
   }

   else{
     parent[v] = u;
     rank[u]++ ;
   }
 }

int minimumSpanningTree(vector<vector<int>>& edges, int n)
{
 
  sort(edges.begin(), edges.end(),cmp);
  vector<int>parent(n) ;
  vector<int>rank(n,0)  ;

  makeset(parent,rank,n);
  int minweight=0;

  for(int i = 0; i<edges.size();i++){
    int u = find_ult_parent(parent,edges[i][0]);
    int v = find_ult_parent(parent,edges[i][1]);
    int wt = edges[i][2];


  if(u != v){
    minweight+=wt;
    unionset(u,v,parent,rank);
  }
  }
  return minweight;
}

int main(){


}