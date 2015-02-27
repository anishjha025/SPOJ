#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int n;
		map<int ,int > mymap;
		map<int ,int >::iterator it;
		scanf("%d",&n);
		int x=n;
		int ans;
		int flag=0;
		while(x--)
		{
			int temp;
			scanf("%d",&temp);
			mymap[temp]++;
		}

		for(it=mymap.begin();it!=mymap.end();it++)
		{
			if(it->second>n/2)
			{
				ans=it->first;
				flag=1;
			}
			//printf("%d %d\n",it->first,it->second);
		}
		if(flag==0)
			printf("NO\n");
		else
			printf("YES %d\n",ans);
	}
}