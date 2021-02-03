#include<bits/stdc++.h>
using namespace std;
//BFS on non-directed graph.

//Function for BFS
void  dfs(vector<int> adj[],int vis[],int s)
{
     cout<<s<<" " ;
     vis[s] = 1;
     for(int i=0;i<adj[s].size();i++)
     {
             if(vis[adj[s][i]]==0)
             {
                     dfs(adj,vis,adj[s][i]);
             }
     }
     return ;
}

int main()
{
        int nodes,edges,x,y;

        //no. of nodes & edges
        cin>>nodes>>edges;

        //Adj list for graph rep.
        vector<int> adjl[10];

        for(int i=0;i<edges;i++)
        {
                cin>>x>>y;
                adjl[x].push_back(y);
                adjl[y].push_back(x);
        }
        //taking start Node for traversal.

        cin>>x;
        int vis[10];
        for(int i=0;i<10;i++)
                vis[i] = 0;

        dfs(adjl,vis,x);

}


/*
 *  Ex.
 *
 *               1
 *             /   \
 *            2     3
 *           / \
 *          4   5
 *
 *          Input:
 *
 *          nodes: 5 edges: 4
 *          1->2
 *          1->3
 *          2->4
 *          2->5
 *
 *         Output:
 *         1->2->4->5->3
 *
*/
