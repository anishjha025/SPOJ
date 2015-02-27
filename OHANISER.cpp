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


ll power(ll base,ll expo)
{
	ll res=1;
	while(expo>0)
	{
		if(expo%2==1)
			res=(res*base)%mod;
		base=(base*base)%mod;
		expo=expo/2;
	}
	return res%mod;
}


int main()
{
	ll tc;
	sfl(tc);

	FOR(i,1,tc+1)
	{
		ll n;
		ll ans;
		sfl(n);
		if(n==1)
		{
			ans=1;
		}
		else if(n==2)
		{
			ans=3;
		}
		else
		{
			ans=((n+1)*(power(2,n-2)))%mod;
		}

		pf("Case %d: %lld\n",i,ans);
	}
	

}
