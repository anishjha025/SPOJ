#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <queue>

using namespace std;
vector<int> v[10005];
int dist[10005],visited[10005];

void bfs(int src)
{
	visited[src]=1;
	queue<int> q;
	q.push(src);
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		//cout<<"size="<<v[u].size()<<endl;
		for(int i=0;i<v[u].size();i++)
		{
			int p=v[u][i];
			//cout<<"p="<<p<<endl;
			if(visited[p]==-1)
			{
				q.push(p);
				visited[p]=1;
				//cout<<"here"<<endl;
				dist[p]=dist[u]+1;
			}
		}
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n-1;i++)
	{
		int src,dest;
		scanf("%d %d",&src,&dest);
		src--;
		dest--;
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

	/*for(int i=0;i<n;i++)
	{
		cout<<"dist["<<i<<"]="<<dist[i]<<endl;
	}*/

	maxim=dist[0];
	for(int i=1;i<n;i++)
	{
		if (dist[i]>maxim)
		{
			maxim=dist[i];

		}
			
	}

	printf("%d\n",maxim);

	return 0;


}