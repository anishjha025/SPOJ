#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		long long int num,n;
		long long int ans;
		
		ans=0;
		scanf("%lld",&n);

		if(n<3)
			printf("1\n");
		else
		{
			ans=ceil(log10(2*3.141592653589793*n)/2 + n*log10(n/2.7182818284590452353));
			printf("%lld\n",ans);
		}


			
		
	}
}