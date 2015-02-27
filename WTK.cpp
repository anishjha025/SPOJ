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

ll solve(int,int);

int main()
{

	ll tc;
	sfl(tc);
	FOR(cnt,0,tc)
	{
		ll n;
		sfl(n);
		ll ans=solve(n,1);
		pf("%lld\n",ans);
	}
	

}

ll solve(int n,int k)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return(solve(n-1,k+1)+k-1)%n+1;
	}
}
