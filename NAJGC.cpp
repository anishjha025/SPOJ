/************************
Author:Anish Kumar Jha
College:Army Institute of Technology ,Pune
*********************
*/


/*Problem:
GCD
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

ll gcd(ll x,ll y)
{
     while(x!=y)
     {
          if(x>y)
              return gcd(x-y,y);
          else
             return gcd(x,y-x);
     }
     return x;
}

int main()
{
	ll tc;
	sfl(tc);
	FOR(cnt,1,tc+1)
	{
		ll x1,y1,x2,y2;
		sfl(x1);
		sfl(y1);
		sfl(x2);
		sfl(y2);

		ll d=(x1+y1)*(x2+y2+1);
		ll n=x1*(x2+1)+y1*(y2 + 1);

		if(d==0 || n==0)
		{
			pf("Case %d: 0\n",cnt);
		}
		else
		{
			ll cf=gcd(n,d);
			/*cout<<"n="<<n<<endl;
			cout<<"d="<<d<<endl;
			cout<<"cf="<<cf<<endl;*/
			pf("Case %d: %lld/%lld\n",cnt,n/cf,d/cf);
		}
	}

}
