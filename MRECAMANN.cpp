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

ll hash[10000001]={0};
ll F[500005];

int main()
{
	F[0]=0;
	hash[0]=1;
	//cout<<"before for"<<endl;
	FOR(i,1,500002)
	{ 
		ll temp=F[i-1]-i;
		
		if(temp>0 && hash[temp]==0)
		{
			
			F[i]=temp;
			hash[temp]=1;
		}
		else
		{

			temp=F[i-1]+i;
			F[i]=temp;
			hash[temp]=1;
		}


	}
	while(1)
	{
		ll n;
		sfl(n);
		if(n==-1)
			return 0;
		ll ans=F[n];
		pf("%lld\n",ans);


	}

	return 0;
	

}
