#include <iostream>
#include <stdio.h>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	while(1)
	{
		int n;
		scanf("%d",&n);
		if(n==0)
			break;
		int arr[n+1];
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&arr[i]);
		}
		map<int ,int> mymap;
		map<int ,int>::iterator it;
		for(int i=1;i<=n;i++)
		{
			int temp=arr[i];
			mymap[temp]=i;
		}
		int brr[n+1];
		int pos=1;
		/*for(it=mymap.begin();it!=mymap.end();it++)
		{
			cout<<"a = "<<it->first<<" a' ="<<it->second<<endl;

		}
		cout<<"----------------------\n";*/
		for(int i=1;i<=n;i++)
		{
			int temp=mymap.find(i)->second;
			//cout<<temp<<endl;
			brr[pos++]=temp;
		}
		int flag=0;
		for(int i=1;i<=n;i++)
		{
			if(arr[i]!=brr[i])
			{
				flag=1;
				break;
			}
		}

		if(flag==0)
		{
			printf("ambiguous\n");
		}
		else
		{
			printf("not ambiguous\n");
		}

	}
}