#include <iostream>
#include <map>
using namespace std;

map <long long int ,long long int> m;
long long int coindp(long long int n)
{
	if(n==0 )
		return 0;
	long long int r=m[n];
	if(r==0)
	{
		r=max(n,coindp(n/2)+coindp(n/3)+coindp(n/4));
		m[n]=r;
	}
	return r;

}


int main()
{
	int tc=10;
	while(tc--)
	{
		long long int n;
		cin>>n;
		long long int ans=coindp(n);
		cout<<ans<<"\n";
	}
}