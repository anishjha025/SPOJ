/************************
Author:Anish Kumar Jha
College:Army Institute of Technology ,Pune
***************************/

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



int main()
{
	int tc;
	sf(tc);
	while(tc--)
	{
		int n,k;
		sf(n);sf(k);
		ll h[n+1];
		FOR(i,0,n)
		{
			sfl(h[i]);
		}
		sort(h,h+n);
		
		ll ans=9999999999L;

		FOR(i,0,(n-k+1))
		{
			//pf("i=%d,i+k=%d\n",i,i+k);
		
			ll temp=h[i+k-1]-h[i];
			if (temp<ans)
				ans=temp;
			
		}

		pf("%lld\n",ans);

	}
	

}
