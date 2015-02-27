#include <iostream>
#include <stdio.h>
#include <string.h>
#include <map>
using namespace std;

int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		map<string,int> mymap;
		map<string,int>::iterator it;
		int n;
		char arr[200];
		scanf("%d",&n);
		getchar();
		for(int i=0;i<n;i++)
		{
			gets(arr);
			mymap[arr]+=1;
		}

		for(it=mymap.begin();it!=mymap.end();it++)
		{	
			string print;
			print =it->first;
			int cnt=it->second;
			cout<<print<<" "<<cnt<<endl;
		}

	}
}
