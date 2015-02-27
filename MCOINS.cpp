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



int main()
{
	ll k,l,m;
	sfl(k);sfl(l);sfl(m);
	ll maxm=0;
	ll arr[m+1];
	FOR(i,0,m)
	{
		sfl(arr[i]);
		maxm=max(arr[i],maxm);
	}

	int flag[1000001]={0};
	FOR(i,1,maxm+1)
	{
		if(flag[i-1]==0)
		{
			flag[i]=1;
		}
		else if(flag[i-1]==1)
		{
			flag[i]=0;
		}
		if(i>=k && flag[i-k]==0)
		{
			flag[i]=1;
		}
		if(i>=l && flag[i-l]==0)
		{
			flag[i]=1;
		}
	}

	FOR(i,0,m)
	{
		if(flag[arr[i]]==1)
		{
			pf("A");
		}
		else
		{
			pf("B");
		}
	}
	pf("\n");
	

}
