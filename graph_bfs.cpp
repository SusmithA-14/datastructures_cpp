//BFS for Undirected Graph
#include<bits/stdc++.h>
using namespace std;
void BFS(int node,vector<int>&vis,vector<int>adj[]){
    queue<int>Q;
    Q.push(node);
    vis[node]=1;
    while(!Q.empty()){
        int node=Q.front();
        Q.pop();
        cout<<node<<" ";
        for(auto it:adj[node]){
            if(!vis[it]){
                Q.push(it);
                vis[it]=1;
            }
        }
    }
}
int main(){
    //take no.of nodes snd no.edges
    int n,m;
    cin>>n>>m;
    vector<int>adj[n+1];
    int u,v;
    for(int i=0;i<n;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>vis(n+1,0)
        for(int i=0;i<=n;i++){
            if(!vis[i]){
                BFS(i,vis,adj);
            }
        }
}

/*Input->>
5 6
1 2 
2 3
2 4
3 4
5 1

Output->>
0 1 2 5 3 4 
*/