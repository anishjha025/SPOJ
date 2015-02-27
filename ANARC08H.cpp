#include <iostream>
#include <cstdio>

using namespace std;

int josephus(int n,int k)
{
	/*if(n==1)
		return 1;
	else
		return (josephus(n-1,k)+k-1)%n+1;*/

	int ans=0;
	for(int i=1;i<=n;i++)
	{
		ans=(ans+k-1)%i+1;
		//cout<<"ans :"<<ans<<endl;
	}

	return ans;
}


int main()
{
	int n,k;
	while(1)
	{
		cin>>n>>k;
		if(n==0 && k==0)
			return 0;
		int ans=josephus(n,k);
		printf("%d %d %d\n",n,k,ans );
	}
}