#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int lcp(string a,string b)
{
	int l1=a.size();
	int l2=b.size();
	int cnt=0;
	for(int i=0;i<l1 && i<l2;i++)
	{
		if(a[i]!=b[i])
			break;
		cnt++;
	}

	return cnt;
}

int main()
{
	int tc;

	//printf("%d\n",lcp("nana","nana") );
	scanf("%d",&tc);
	while(tc--)
	{
		string str;
		string suff_arr[2000];
		//scanf("%s",&str);
		cin>>str;
		int len=str.size();
		for(int i=0;i<len;i++)
		{
			suff_arr[i]=str.substr(i,len);
		}

		/*printf("Before sort:\n");
		for(int i=0;i<len;i++)
		{
			//printf("%s\n",suff_arr[i]);
			cout<<suff_arr[i]<<endl;
		}

		
		printf("After sort:\n");
		for(int i=0;i<len;i++)
		{
			//printf("%s\n",suff_arr[i]);
			cout<<suff_arr[i]<<endl;
		}*/

		sort(suff_arr,suff_arr+len);
		int ans=0;

		
		ans=suff_arr[0].size();
		for(int i=1;i<len;i++)
		{
			ans+=suff_arr[i].size()-lcp(suff_arr[i-1],suff_arr[i]);
		}
		

		cout<<ans<<endl;

	}
}