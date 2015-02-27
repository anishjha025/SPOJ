#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#define mod 1000000007
#define pf printf
#define sf(a) scanf("%d",&a)
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int solve(int a,int b)
{
	int x=1;
	while(b)
	{
		if(b%2)
			x=(x*a)%10;
		b>>=1;
		a=(a*a)%10;
	}
	return x;
}

int main()
{
	int tc;
	sf(tc);
	while(tc--)
	{
		int a,b;
		sf(a);
		sf(b);
		pf("%d\n",solve(a,b));



	}
	return 0;


}