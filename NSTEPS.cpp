#include <iostream>
using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc--){
		int a,b;
		cin>>a>>b;
		int ans;
		if(a-b!=2 && a-b!=0)
		{
			cout<<"No Number\n";
		} 
		else
		{
			if(a==b)
			{
				if (a%2==0)
					ans=2*a;
				else
					ans=2*a-1;
			}
			else
			{
				if(a%2==0 && b%2==0)
					ans=a+b;
				else
					ans=a+b-1;
			}

			cout<<ans<<"\n";
		}
	}
}