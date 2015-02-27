#include <iostream>
#include <math.h>
using namespace std;

int reverse(int x)
{
	int arr[20];
	int n=x;
	int i=0;
	while(n>0)
	{
		int temp=n%10;
		arr[i++]=temp;
		n=n/10;
	}

	/*for(int a=0;a<i;a++)
	{
		cout<<arr[a]<<" ";
	}*/

	

	int final=0;
	int len=i;
	int pos=len-1;
	for(i=0;i<len;i++)
	{
		final+=arr[i]*pow(10,pos);
		pos--;
	}
	
	//cout<<final<<endl;
	return final;
}

int addrev(int a,int b)
{
	a=reverse(a);
	b=reverse(b);
	int sum=a+b;
	sum=reverse(sum);
	return sum;
}

int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int a,b;
		cin>>a>>b;
		int ans=addrev(a,b);
		cout<<ans<<endl;
	}
}