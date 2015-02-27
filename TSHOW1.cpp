#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

long long int bitsum[100];
int search(int n)

{
	if(n==1)
		return 1;
	for(int i=1;i<=n;i++)
	{
		if(bitsum[i]<n && bitsum[i+1]>n)
			return i+1;
		if(bitsum[i]==n)
			return i;
	}
}
/*
int bsearch(int n)
{
	int first=1,last=50,temp,index,flag=0;
	if(n==1)
		return 1;
	while(first<last)
	{
		int mid=(first+last)/2;
		if(bitsum[mid]==n)
		{
			cout<<"1. mid: "<<bitsum[mid]<<endl;
			return mid;
			
		}
		else if(bitsum[mid]>n)
		{
			last=mid-1;

			if(flag==0)
			{
				temp=bitsum[mid];
				cout<<"2. mid: "<<bitsum[mid]<<endl;
				index=mid;
				flag=1;
			}
			else
			{
				if(n < bitsum[mid] && temp > bitsum[mid])
				{
					temp=bitsum[mid];
					cout<<"3. mid: "<<bitsum[mid]<<endl;
					index=mid;
				}
				else
				{
					cout<<"4. temp: "<<temp<<endl;
					return index;
				}
			}
			
		}
		else if(bitsum[mid]<n)
		{
			
			first=mid+1;
			cout<<"5. mid: "<<bitsum[mid]<<endl;
			if(n < bitsum[mid] && temp > bitsum[mid])
				{
					temp=bitsum[mid];
					cout<<"6. mid: "<<bitsum[mid]<<endl;
					index=mid;
				}
				else
				{
					cout<<"6. temp: "<<temp<<endl;
					return index;
				}
			
		}
	}
}
*/
void precompute()
{
	bitsum[0]=0;
	for(int i=1;i<=50;i++)
	{
		bitsum[i]=bitsum[i-1]+pow(2,i);
	}
}

int main()
{
	precompute();
	/*cout<<"bitsum:\n";
	for(int i=0;i<=50;i++)
	{
		cout<<bitsum[i]<<" ";
	}
	cout<<endl;
	*/
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		long long int n,bit,num,temp,nd,pos=0;
		char result[1000001];
		scanf("%lld",&n);
		bit=search(n);
		num=n-bitsum[bit-1]-1;

		nd=1;
		while(bit--)
		{
			temp=nd & num;

			if(temp==1)	
			{
				result[pos++]='6';
			}
			else
			{
				result[pos++]='5';
			}

			num=num>>1;
		}

		for(int i=pos-1;i>=0;i--)
		{
			printf("%c",result[i]);
		}

		printf("\n");
	}

	return 0;
}