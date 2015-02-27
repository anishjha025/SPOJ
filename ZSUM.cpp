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
#define mod 10000007
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define pf printf
#define sf(a) scanf("%d",&a)
#define sfl(a) scanf("%lld",&a)
#define ll long long 
using namespace std;


ll modpow(ll base,ll expo)
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
	while(1)
	{
		ll n,k;
		sfl(n);
		sfl(k);
		if(n==0 && k==0)
			break;
		ll a=(2*modpow(n-1,k))%mod;
		ll b=(2*modpow(n-1,n-1))%mod;
		ll c=modpow(n,k)%mod;
		ll d=modpow(n,n)%mod;

		ll e=(a+b)%mod;
		ll f=(c+d)%mod;
		ll ans=(e+f)%mod;
		pf("%lld\n",ans);

	}
	

}
