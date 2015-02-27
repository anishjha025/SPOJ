#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
void computelps(char *pat,int m,int *lps)
{
	int len=0;
	int i;
	lps[0]=0;
	i=1;
	while(i<m)
	{
		if(pat[i]==pat[len])
		{
			len++;
			lps[i]=len;
			i++;
		}
		else
		{
			if(len!=0)
			{
				len=lps[len-1];
			}
			else
			{
				lps[i]=0;
				i++;
			}
		}
	}
}

void KMP(char *pat,string text)
{
	int m=strlen(pat);
	int n=text.size();
	int ans[100005]={0};
	int pos=0;
	int lps[m];
	computelps(pat,m,lps);
	int i=0,j=0;
	while(i<n)
	{	
		//printf("here i=%d ,j=%d\n",i,j);
		if(pat[j]==text[i])
		{
			j++;
			i++;
		}
		if(j==m)
		{
			//printf("here i=%d ,j=%d\n",i,j);
			//printf("%d\n",i-j);
			ans[pos++]=i-j;
			j=lps[j-1];
		}
		else if(i<n &&pat[j]!=text[i])
		{
			if(j!=0)
				j=lps[j-1];
			else
				i++;
		}

	}

	if(pos==0)
	{
		printf("Not Found\n");
	}
	else
	{	
		printf("%d\n",pos);
		for(int i=0;i<pos;i++)
		{
			printf("%d ",ans[i]+1);
		}
		printf("\n");
	}
	
	

}


int main()
{
	int tc;
	char pat[1000005],text[1000005];
	scanf("%d",&tc);
	while(tc--)
	{

		scanf("%s",text);
		scanf("%s",pat);

		KMP(pat,text);
		printf("\n");

	}
}