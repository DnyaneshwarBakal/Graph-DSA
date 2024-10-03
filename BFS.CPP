#include<bits/stdc++.h>
using namespace std;
void undirectedGraph(vector<vector<int>>&
mat,int vertex,int edges)
{
   

// vector<vector<int>>mat(vertex,vector<int>(vertex,0));
    int u,v;
    for(int i=0;i<edges;i++)
    {
        cin>>u>>v;
        mat[u][v]=1;
        mat[v][u]=1;
    }
    // for(int i=0;i<vertex;i++)
    // {
    //     for(int j=0;j<vertex;j++)
    //     {

    //         cout<<mat[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}
void bfs(vector<vector<int>>mat,int node)
{
    vector<bool>visited(mat.size(),0);
    queue<int>q;
    q.push(node);
    visited[node]=1;
    while(!q.empty())
    {
        node=q.front();
        q.pop();
        cout<<node<<" ";
        for(int i=0;i<mat.size();i++)
        {
            if(mat[node][i]==1&&!visited[i])
            {
                q.push(i);
                visited[i]=1;

            }
        }
    }
}
int main()
{ 
    int vertex,edges;
    cout<<"enter a vertex and edges";
    cin>>vertex>>edges;
    vector<vector<int>>mat(vertex,vector<int>(vertex,0));
 undirectedGraph(mat,vertex,edges);
  
 
bfs(mat,0);
}