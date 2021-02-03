#include<bits/stdc++.h>
using namespace std;
//BFS on non-directed graph.

//Function for BFS
void bfs(vector<int> adj[],int nodes,int edges,int s)
{
        //array to keep track of visited nodes
        bool vis[nodes];

        //queue to travel nodes. push first node in queue
        queue<int> q;
        q.push(s);
        vis[s] = 1;

        //Until all nodes are not visited
        while(!q.empty())
        {
                int p = q.front();
                q.pop();
                cout<<p<<" ";

                //Check all adj. nodes of the current node
                for(int i=0;i<adj[p].size();i++)
                {
                        //if the adj. node is not visited then push it 
                        //into queue and mark it as visited.
                        if(vis[adj[p][i]]==0)
                        {
                                q.push(adj[p][i]);
                                vis[adj[p][i]] = 1 ; 
                        }
                }
        }
        cout<<endl;

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

        bfs(adjl,nodes,edges,x);
}

/*
 *
 * Ex.    1
 *     /  |  \
 *    3   4   5
 *
 *    nodes = 4 , edges = 3
 *
 *
 *    1->3
 *    1->4
 *    1->5
 *    starting node
 *    x = 1
 *
 *    output = 1  3 4 5 
 *  
*/


