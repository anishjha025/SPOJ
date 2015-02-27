/************************
Author:Anish Kumar Jha
College:Army Institute of Technology ,Pune
*************************
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

void multiply(ll F[2][2], ll M[2][2])
{
  ll x =((F[0][0]%mod*M[0][0]%mod)%mod + (F[0][1]%mod*M[1][0]%mod)%mod)%mod;
  ll y =((F[0][0]%mod*M[0][1]%mod)%mod + (F[0][1]%mod*M[1][1]%mod)%mod)%mod;
  ll z =((F[1][0]%mod*M[0][0]%mod)%mod + (F[1][1]%mod*M[1][0]%mod)%mod)%mod;
  ll w =((F[1][0]%mod*M[0][1]%mod)%mod + (F[1][1]%mod*M[1][1]%mod)%mod)%mod;
 
  F[0][0] = x%mod;
  F[0][1] = y%mod;
  F[1][0] = z%mod;
  F[1][1] = w%mod;
}

void power(ll F[2][2], ll n)
{
  if( n == 0 || n == 1)
      return;
  ll M[2][2] = {{1,1},{1,0}};
 
  power(F, n/2);
  multiply(F, F);
 
  if (n%2 != 0)
     multiply(F, M);
}
 




ll Term(ll n)
{
  ll F[2][2] = {{1,1},{1,0}};
  if (n == 0)
    return 0;
  power(F, n-1);
  return F[0][0];
}
 
ll sum(ll n)
{
	ll ret=Term(n+2)-1;
	return ret;

}




int main()
{
	int tc;
	sf(tc);
	while(tc--)
	{
		ll n,m;

		sfl(n);sfl(m);
		ll s1=sum(n);

		ll s2=sum(m);

		ll res=s2-s1+Term(n);

		//cout<<"s1: "<<s1

		//cout<<"res:"<<res<<endl;
		if(res<0)
			pf("%lld\n",(res+mod)%mod);
		else
			pf("%lld\n",res%mod);
	}
	

}
