#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int tree[10000005];
int n;
int maxv;
void update(int idx,int val)
{
	while(idx<=maxv)
	{
		tree[idx]+=val;
		idx+=(idx&-idx);
	}
}
long long int get(int idx)
{
	long long int sum=0;
	while(idx >0)
	{
		sum+=tree[idx];
		idx-=(idx&-idx);
	}
	return sum;
}

int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
        maxv=0;      
		scanf("%d",&n);
		int arr[n+1];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
			maxv=max(maxv,arr[i]);
		}

		memset(tree,0,sizeof tree);
		long long int ans=0;
		for(int i=n-1;i>=0;i--)
		{
			update(arr[i],1);
			ans+=get(arr[i]-1);
		}

		printf("%lld\n",ans);

	}

}
