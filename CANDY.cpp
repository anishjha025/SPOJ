#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	while(1){
		int n;
		cin>>n;
		if(n==-1)
			return 0;
		int arr[n+1];
		long long int sum=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			sum+=arr[i];
		}
		if(sum%n!=0){
			cout<<"-1\n";
		}
		else{ 
			long long int avg=sum/n;
			int ans=0;
			for(int i=0;i<n;i++)
			{
				if(arr[i]<avg)
					ans=ans+(avg-arr[i]);
			}
			
			cout<<ans<<"\n";

		}
	}
}
