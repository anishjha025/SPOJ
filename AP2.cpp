#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	long long int tc;
	scanf("%lld",&tc);
	while(tc--)
	{
		long long int x,y,z;
		scanf("%lld %lld %lld",&x,&y,&z);
		long long int n=(2*z)/(x+y);
		long long int d=(y-x)/(n-5);
		long long int a=x-2*d;
		printf("%lld\n",n);
		for(long long int i=0;i<n;i++)
		{
			printf("%lld ",a);
			a=a+d;
		}
		printf("\n");
	}
}