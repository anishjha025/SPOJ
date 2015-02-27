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
#define sfl(a) scanf("%lld",&a);
#define ll long long 
using namespace std;

#define MAX 100005

int prime[MAX];
vector <ll> v[MAX];

ll solve(ll n)
{
	ll res=n;
	ll i=2;
	while(i*i<=n)
	{
		if(n%i==0)
		{
			res=res-(res/i);
		}
		while(n%i==0)
		{
			n=n/i;
		}
		i++;
	}

	if(n>1)
	{
		res=res-(res/n);

	}




	return res;
	

}

int main()
{
	int tc;
	
	sf(tc);
	while(tc--)
	{
		ll n;
		sfl(n);
		ll ans=solve(n);
		pf("%lld\n",ans);
	}

	return 0;

}
