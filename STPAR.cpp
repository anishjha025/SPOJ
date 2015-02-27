#include <iostream>
#include <stack>
#include <vector>
#include <queue>
#include <algorithm>
#include <stdio.h>
#define pb push_back

using namespace std;

int main()
{
    while(1)
    {
        int n;
        vector<int> v;
        scanf("%d",&n);
        if(n==0)
            break;
        for(int i=0;i<n;i++)
        {
            int num;
            scanf("%d",&num);
            v.pb(num);
        }

        stack<int> st;
        vector<int> q;
        int need=1;
        int flag=0;
        for(int i=0;i<v.size();i++)
        {
            while(!st.empty() && st.top()==need)
            {

                need++;
                st.pop();
            }

            if(v[i]==need)
            {
                need++;

            }
            else if(!st.empty() && st.top()<v[i])
            {
               flag=1;
               break;
            }
            else
            {

                st.push(v[i]);
            }
        }




        if(flag==0)
        {

            printf("yes\n");
        }
        else{
            printf("no\n");
        }

        v.clear();
    }

}
