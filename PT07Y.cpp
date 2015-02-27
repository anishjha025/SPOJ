#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

struct Edge
{
    int src, dest;
};
 

struct Graph
{
    
    int V, E;
 
    
    struct Edge* edge;
};
 

struct Graph* createGraph(int V, int E)
{
    struct Graph* graph = (struct Graph*) malloc( sizeof(struct Graph) );
    graph->V = V;
    graph->E = E;
 
    graph->edge = (struct Edge*) malloc( graph->E * sizeof( struct Edge ) );
 
    return graph;
}
 

int find(int parent[], int i)
{
    if (parent[i] == -1)
        return i;
    return find(parent, parent[i]);
}
 

void Union(int parent[], int x, int y)
{
    int xset = find(parent, x);
    int yset = find(parent, y);
    parent[xset] = yset;
}
 

int isCycle( struct Graph* graph )
{
    
    int *parent = (int*) malloc( graph->V * sizeof(int) );
 
    
    memset(parent, -1, sizeof(int) * graph->V);
 
    
    for(int i = 0; i < graph->E; ++i)
    {
        int x = find(parent, graph->edge[i].src);
        int y = find(parent, graph->edge[i].dest);
 
        if (x == y)
            return 1;
 
        Union(parent, x, y);
    }
    return 0;
}
 

int main()
{
    
        int n,e;
        cin>>n>>e;
        struct Graph* graph = createGraph(n, e);

        for(int i=0;i<e;i++)
        {
            int a,b;
            cin>>a>>b;
            a--;
            b--;
            
            graph->edge[i].src=a;
            graph->edge[i].dest=b;
        }
 
   
        if (isCycle(graph))
            printf( "NO\n" );
        else
            printf( "YES\n" );
  
 
    return 0;
}