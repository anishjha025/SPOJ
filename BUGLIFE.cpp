#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <queue>

using namespace std;

int graph[5002][5002];
int visited[5002];

int bfs(int v,int src)
{
	visited[src]=1;
	queue<int> q;
	q.push(src);
	while(!q.empty())
	{
		int u=q.front();
		//cout<<u<<" ";
		q.pop();
		for(int i=0;i<v;i++)
		{
			if(graph[u][i]==1 && visited[i]==-1)
			{
				visited[i]=1-visited[u];
				q.push(i);
			}
			else if(graph[u][i]==1 && visited[i]==visited[u])
				return 0;
		}


	}
	
	return 1;
}

int isbipartite(int v)
{
	for(int x=0;x<v;x++)
	{
		if(visited[x]==-1)
		{
			if(!bfs(v,x))
				return 0;
		}
	}

	return 1;

}

int main()
{
	int tc;
	scanf("%d",&tc);
	for(int cnt=1;cnt<=tc;cnt++)
	{
		
		int v,e;
		scanf("%d %d",&v,&e);
		for(int i=0;i<v;i++)
		{
			visited[i]=-1;
		}
		for(int i=0;i<v;i++)
		{
			for(int j=0;j<v;j++)
			{
				graph[i][j]=0;
			}
		}

		for(int i=0;i<e;i++)
		{
			int src,dst;
			scanf("%d %d",&src,&dst);
			src--;
			dst--;
			graph[src][dst]=1;
			graph[dst][src]=1;
		}

		/*for(int i=0;i<v;i++)
		{
			for(int j=0;j<v;j++)
			{
				cout<<graph[i][j]<<" ";
			}
			cout<<endl;
		}*/


		if(isbipartite(v))
		{	
			printf("Scenario #%d:\n",cnt);
			printf("No suspicious bugs found!\n");

		}
		else
		{	
			printf("Scenario #%d:\n",cnt);
			printf("Suspicious bugs found!\n");
		}
	}

}