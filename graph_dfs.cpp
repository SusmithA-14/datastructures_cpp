#include<bits/stdc++.h>
using namespace std;
void DFS(int node,vector<int>&vis,vector<int>adj[])
{
    cout<<node<<" ";
    vis[node]=1;
    for(auto it:adj[node])
    {
        if(!vis[it])
        {
            DFS(it,vis,adj);
        }
    }
}
int main()
{
    int n,e;//nodes,edges
    cin>>n>>e;
    vector<int>adj[n+1];//adj list
    int u,v;
    //adjacency list;
    for(int i=0;i<e;i++)
    {
       cin>>u>>v;//input for every node and edges
       adj[u].push_back(v);
       adj[v].push_back(u);
    }
    vector<int>vis(n+1,0);
    DFS(1,vis,adj);
}

/*Input->>

5 6
1 2
2 3
2 4
3 4
4 5
5 1
Output-> 1 2 3 4 5

*/
