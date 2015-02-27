#include <iostream>
#include <stack>
#include <string.h>

using namespace std;

int main()
{
	stack<char> st;
	char expr[500];
	int tc,i;
	cin>>tc;
	while(tc--)
	{
		cin>>expr;
		int len=strlen(expr);
		for(i=0;i<len;i++)
		{
			//cout<<"\nexpr["<<i<<"]="<<expr[i]<<endl;
			if(expr[i]=='(')
				st.push(expr[i]);
			if(expr[i]>=97)
				cout<<expr[i];
			if(expr[i]==')')
			{
				while(st.top()!='(')
				{
					cout<<st.top();
					st.pop();
				}	
				st.pop();
			}

			if(expr[i]=='*'||expr[i]=='+'||expr[i]=='-'||expr[i]=='/'||expr[i]=='^')
			{
				st.push(expr[i]);
				//cout<<"\nhi\n";
			}


		}

		cout<<endl;

	}
}