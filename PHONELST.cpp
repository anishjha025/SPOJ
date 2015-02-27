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

class my_trie
{
public:
	int val;
	my_trie *child[10];
	my_trie()
	{
		FOR(i,0,10)
		{
			child[i]=NULL;
		}
		val=0;
	}

};


int solve(int n)
{
	my_trie *start,*end;
	start=new my_trie;
	int x=1;
	while(n--)
	{
		char s[100];
		scanf("%s",s);
		if(x)
		{
			end=start;
			FOR(i,0,strlen(s))
			{
				if(end->val)
				{
					x=0;
					break;
				}

				int idx=s[i]-'0';
				if(end->child[idx]==NULL)
					end->child[idx]=new my_trie;
				end=end->child[idx];
			}

			end->val=1;
			FOR(i,0,10)
			{
				if(end->child[i])
				{
					x=0;
					break;
				}
			}
		}
	}

	return x;

	
}

int main()
{
	
	int tc;
	sf(tc);
	while(tc--)
	{
		int n;
		sf(n);

		int x=solve(n);
		if(x==1)
		{
			pf("YES\n");

		}
		else
		{
			pf("NO\n");
		}
		

	}
	

}
