#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
	while(1)
	{
		char arr[100000];
		cin.getline(arr,100000);
		if(arr[0]=='*')
			break;
		int x=arr[0];
		int y;
		int flag=0;
		if (x>=97 && x<=122)
		{
			y=x-32;
		}
		else if(x>=65 && x<=90)
		{
			y=x+32;
		}
		for(int i=1;i<strlen(arr);i++)
		{
			if(arr[i]==32)
			{
				i++;
				int temp=arr[i];
				if(temp!=x && temp!=y)
				{
					flag=1;
				}

			}

		}

		if(flag==1)
		{
			printf("N\n");
		}
		else
		{
			printf("Y\n");
		}
	}
}