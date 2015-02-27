#include <iostream>
#include <cstdio>
#define maxVal 100005
using namespace std;

long long int tree1[maxVal];
long long int tree2[maxVal];



void update1(long long int idx,long long int val)
{
	while(idx<=maxVal)
	{
		tree1[idx]+=val;
		idx+=(idx&-idx);
	}
}

void update2(long long int idx,long long int val)
{
	while(idx<=maxVal)
	{
		tree2[idx]+=val;
		idx+=(idx&-idx);
	}
}

long long int read(long long int tree[maxVal],long long int idx)
{
	long long int sum=0;
	while(idx>0)
	{
		sum+=tree[idx];
		idx-=(idx &-idx);
		
	}
	return sum;
}


void update(long long int a ,long long int b ,long long int v)
{
	update1(a,v);
	update1(b+1,-v);
	update2(a,v*(a-1));
	update2(b+1,-v*b);
}

long long int query(long long int b)
{
	return read(tree1,b)*b-read(tree2,b);
}

long long int query(long long int a ,long long int b)
{
	return query(b)-query(a-1);
}

int main()
{
	long long int tc;
	scanf("%lld",&tc);
	while(tc--)
	{
		long long int n,c;
		for(int i=0;i<maxVal;i++)
		{
			tree1[i]=0;
			tree2[i]=0;

		}
		scanf("%lld %lld",&n,&c);
		while(c--)
		{
			int stat;
			scanf("%d",&stat);
			if(stat==0)
			{
				long long int p,q,v;
				scanf("%lld %lld %lld",&p,&q,&v);
				update(p,q,v);
			}
			else if(stat==1)
			{
				long long int p,q;
				scanf("%lld %lld",&p,&q);
				long long int ans=query(p,q);
				printf("%lld\n",ans );
			}
		}
	}

}