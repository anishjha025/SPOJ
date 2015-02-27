#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int n;
		cin>>n;
		int num,den;
		num=1;
		den=1;
		if(n==1)
			printf("TERM %d IS %d/%d\n",n,num,den);
		else
		{
			int flag=0;
			int ans=1;
			while(ans<n)
			{
				//printf("flag=%d\n",flag);
				if(den==1 && num!=1)
				{
					num+=1;
					ans+=1;
					flag=0;
					if(ans==n)continue;
					num--;
					den++;
					ans+=1;
					//printf("here\n");
					continue;
				}
				if(flag==1)
				{
					num++;
					den--;
					ans+=1;
					continue;
				}

				if(num==1)
				{
					den+=1;
					ans+=1;
					flag=1;
					continue;
				}

				if(flag==0)
				{
					num-=1;
					den+=1;
					ans+=1;
					continue;
				}
				


				


			}

			printf("TERM %d IS %d/%d\n",n,num,den);
		}

		
	}
}
