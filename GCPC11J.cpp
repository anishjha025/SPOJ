#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <queue>

using namespace std;
vector<int> v[100005];
int dist[100005],visited[100005];

void bfs(int src)
{
	visited[src]=1;
	queue<int> q;
	q.push(src);
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		
		for(int i=0;i<v[u].size();i++)
		{
			int p=v[u][i];
			
			if(visited[p]==-1)
			{
				q.push(p);
				visited[p]=1;
				
				dist[p]=dist[u]+1;
			}
		}
	}
}

int main()
{

	int tc;
	scanf("%d",&tc);

	while(tc--)
	{

		int n;
		scanf("%d",&n);
		for(int i=0;i<n-1;i++)
		{
			int src,dest;
			scanf("%d %d",&src,&dest);
			//src--;
			//dest--;
			v[src].push_back(dest);
			v[dest].push_back(src);
		}

	

	
		for(int i=0;i<n;i++)
		{
			dist[i]=0;
			visited[i]=-1;
		}
		dist[0]=0;
		bfs(0);
		int node;
		int maxim=dist[0];
		for(int i=1;i<n;i++)
		{
			if (dist[i]>maxim)
			{
				maxim=dist[i];
				node =i;
			}
			
		}

		for(int i=0;i<n;i++)
		{
			dist[i]=0;
			visited[i]=-1;
		}


		bfs(node);

	

		maxim=dist[0];
		for(int i=1;i<n;i++)
		{
			if (dist[i]>maxim)
			{
				maxim=dist[i];

			}
			
		}
		if(maxim%2==0)
		{
			maxim=maxim/2;
		}
		else
		{
			maxim=maxim/2+1;
		}

		printf("%d\n",maxim);
		for(int i=0;i<100005;i++)
			v[i].clear();
	}

	return 0;


}

