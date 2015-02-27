#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
	while(1)
	{
		int a,d;
		scanf("%d %d",&a,&d);
		if(a==0 && d==0)
			return 0;
		int attack[a+1],defend[d+1];
		for(int i=0;i<a;i++)
		{
			scanf("%d",&attack[i]);
		}
		for(int i=0;i<d;i++)
		{
			scanf("%d",&defend[i]);
		}
		sort(attack,attack+a);
		sort(defend,defend+d);
		if(defend[1]>attack[0])
			printf("Y\n");
		else
			printf("N\n");
	}
}
