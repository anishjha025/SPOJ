#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	while(1)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(a==0 && b==0 && c==0)
		{
			return 0;
		}
		int x=2*b;
		if(x==(a+c))
		{
			int d=b-a;
			int ans=c+d;
			cout<<"AP "<<ans<<"\n";
		}
		else
		{
			int r=b/a;
			int ans=a*pow(r,3);
			cout<<"GP "<<ans<<"\n";
		}
	}
}