#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int n;
		cin>>n;
		int m[n];
		int f[n];
		for(int i=0;i<n;i++)
		{
			cin>>m[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>f[i];
		}

		sort(m,m+n);
		sort(f,f+n);

		long long int ans=0;
		for(int i=0;i<n;i++)
		{
			ans=ans+(m[i]*f[i]);
		}
		cout<<ans<<"\n";
	}
}