#include<bits/stdc++.h>
using namespace std;
void undirectedGraph()
{
    int vertex,edges;
    cout<<"enter a vertex and edges";
    cin>>vertex>>edges;

vector<vector<int>>mat(vertex,vector<int>(vertex,0));
    int u,v;
    for(int i=0;i<edges;i++)
    {
        cin>>u>>v;
        mat[u][v]=1;
        mat[v][u]=1;
    }
    for(int i=0;i<vertex;i++)
    {
        for(int j=0;j<edges;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
void directedGraph()
{
    int vertex,edges;
    cout<<"enter a vertex and edges";
    cin>>vertex>>edges;

vector<vector<int>>mat(vertex,vector<int>(vertex,0));
    int u,v;
for(int i=0;i<edges;i++)
    {
        cin>>u>>v;
        mat[u][v]=1;
        // mat[v][u]=1;

    }
    for(int i=0;i<vertex;i++)
    {
        for(int j=0;j<edges;j++)
        {

            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
// similar we can create directed weighted  grpah.
// just mark edges between u to v;

void undirectedWeightedGraph()
{
    int vertex,edges;
    cout<<"enter a vertex and edges";
    cin>>vertex>>edges;

vector<vector<int>>mat(vertex,vector<int>(vertex,0));
    int u,v,weight;
for(int i=0;i<edges;i++)
    {
        cin>>u>>v>>weight;
        mat[u][v]=weight;
        mat[v][u]=weight;

    }
    for(int i=0;i<vertex;i++)

    {
        for(int j=0;j<edges;j++)
        {

            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
int  main()
{
    undirectedGraph();
    // directedGraph();
    // undirectedWeightedGraph();

    
}