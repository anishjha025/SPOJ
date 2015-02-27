#include <stdio.h>


int gcd(int a,int b)
{
	if(b){
		return gcd(b,a%b);
	}
	else{
		return a;
	}
}

int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		int x=gcd(a,b);
		if(c%x==0)
		{
			printf("Case %d: Yes\n",i );
		}
		else
		{
			printf("Case %d: No\n",i );
		}
	}
	return 0;
}