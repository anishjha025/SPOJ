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

ll solve(ll n)
{
	ll m,res;
	m=n;
	while(1)
	{
		m=n;
		res=0;
		while(m>0)
		{
			ll temp=m%10;
			res=res+temp;
			m=m/10;
		}
		if(n%res==0)
		{
			return n;

		}
		else
		{
			n=n+1;
		}
	}



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

}
