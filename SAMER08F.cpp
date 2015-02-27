#include <iostream>
using namespace std;

int main()
{
	int arr[101];
	int cnt=0;
	int ans=0;
	for(int i=1;i<=100;i++)
	{
			ans+=(i*i);
			arr[cnt++]=ans;
	}

	while(1)
	{
		int n;
		cin>>n;
		if(n==0)
			return 0;
		cout<<arr[n-1]<<"\n";
	}
}
