#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
	long long int dp[10000];
	char arr[10000];
	while(1)
	{
		
		scanf("%s",arr);
		if(arr[0]=='0')
			break;
		int len=strlen(arr);
		dp[0]=dp[1]=1;
		for(int i=2;i<=len;i++)
		{
			dp[i]=0;
			int temp1,temp2;
			temp1=arr[i-2]-'0';
			temp2=arr[i-1]-'0';

			//printf("temp1:%d\n",temp1);
			//printf("temp2:%d\n",temp2);


			if(temp1==1||(temp1==2 && temp2<=6))
			{
				dp[i]+=dp[i-2];
			}

			if(temp2!=0)
			{
				dp[i]+=dp[i-1];
			}
		}
		
		/*for(int i=0 ;i<=len;i++)
        {

            printf("%lld ",dp[i]);
        }
        printf("\n");*/

		printf("%lld\n",dp[len]);



	}
}