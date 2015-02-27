
def  solve(n,k,m):
	ans=0
	if(k<=m/n):
		ans+=1
		x=n*k
		while(k<=m/x):
			ans+=1
			x=x*k
	return ans

tc=int(raw_input())
while(tc):
	n,k,m=map(int,raw_input().split())
	ans=solve(n,k,m)
	print ans

	tc-=1