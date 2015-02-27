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



int main()
{
	int n;
	sf(n);
	int arr[n+1];
	FOR(i,0,n)
	{
		sf(arr[i]);
	}
	int k;
	sf(k);
	FOR(i,0,(n-k+1))
	{
		int max=arr[i];
		FOR(j,1,k)
		{
			if(arr[i+j]>max)
			{
				max=arr[i+j];
			}
			
		}
		pf("%d ",max);
	}
	pf("\n");
	

}
