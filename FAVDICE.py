tc=int(raw_input())
while(tc):
	n=int(raw_input())
	ans=[0]*3003
	ans[1]=1
	if n==1:
		print 1/1.0
	else:
		for i in xrange(2,n+1):
			ans[i]=ans[i-1]+(1.0/i)

		print ans[n]*n
	tc-=1