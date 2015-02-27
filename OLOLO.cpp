#include <iostream>
#include <stdio.h>
using namespace std;

int solve(int arr[],int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	{
		res=res^arr[i];
	}

	return res;
}

int main()
{
	
		int n;
		scanf("%d",&n);
		//cin>>n;
		int arr[n+1];
		for(int i=0;i<n;i++)
		{	
			scanf("%d",&arr[i]);
			//cin>>arr[i];
		}

		int ans=solve(arr,n);
		printf("%d\n",ans );
		//cout<<ans<<endl;
	
}
