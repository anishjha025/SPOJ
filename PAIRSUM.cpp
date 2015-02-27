/************************
Author:Anish Kumar Jha
College:Army Institute of Technology ,Pune
*********************
*/

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#define mod 1000000007
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define pf printf
#define sf(a) scanf("%d",&a)
#define sfl(a) scanf("%lld",&a)
#define ll long long 
using namespace std;

ll arr[100005],sum[100005],prod[100005];
int n;

void precompute()
{
	sum[0]=arr[0];
	ll p=arr[0]*arr[0];
	prod[0]=p;
	FOR(i,1,n)
	{
		p=arr[i]*arr[i];
		sum[i]=sum[i-1]+arr[i];
		prod[i]=prod[i-1]+p;
	}
}

ll solve(int u,int v)
{
	ll a=sum[v]-sum[u]+arr[u];
	ll b=prod[v]-prod[u]+(arr[u]*arr[u]);
	ll ans=((a*a)+b)/2;
	return ans;
}


int main()
{
	
	sf(n);
	
	FOR(i,0,n)
	{
		sfl(arr[i]);
	}
	
	precompute();

	int q;
	sf(q);
	while(q--)
	{
		int u,v;
		sf(u);sf(v);
		ll res=solve(u,v);
		pf("%lld\n",res);
	}
	

}
