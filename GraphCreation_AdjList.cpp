#include<bits/stdc++.h>
using namespace std;
void undirectedGraph()
{
    int vertex,edges;
    cout<<"enter a vertex and edges ";
    cin>>vertex>>edges;
   vector<int>adjlist[vertex];
   int u,v;
   for(int i=0;i<edges;i++)
   {
    cin>>u>>v;
   adjlist[u].push_back(v);
   adjlist[v].push_back(u);
   }
   for(int i=0;i<vertex;i++)
   {
    cout<<i<<" ->";
    for(int j=0;j<adjlist[i].size();j++)
    {
        cout<<adjlist[i][j]<<" ";
    }
    cout<<endl;
   }

}
//SIMILAR WE CAN CREATE DIRECTED WEIGHTED GRAPH OR DIRECTED GRAPH
void undirectedWeightedGrah()
{
    int vertex,edges;
    cout<<"enter a vertex and edges ";
    cin>>vertex>>edges;
   vector<pair<int,int>>adjlist[vertex];
   int u,v,weight;
   for(int i=0;i<edges;i++)
   {
    cin>>u>>v>>weight;
   adjlist[u].push_back({v,weight});
   adjlist[v].push_back({u,weight});
   }
   for(int i=0;i<vertex;i++)
   {
    cout<<i<<" ->";
    for(int j=0;j<adjlist[i].size();j++)
    {
        cout<<"{"<<adjlist[i][j].first<<","<<adjlist[i][j].second<<"}";
    }
    cout<<endl;
   }
}
int main()
{
    // undirectedGraph();
    undirectedWeightedGrah();

}