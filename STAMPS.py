tc=int(raw_input())
for cnt in range(1,tc+1):
	s,n=map(int,raw_input().split())
	arr=map(int,raw_input().split())
	arr.sort(reverse=True)
	ans=0
	i=0
	sm=0
	flag=0
	while(i<n):
		sm+=arr[i]
		ans+=1
		if(sm>=s):
			flag=1
			break
		i+=1
	print "Scenario #%d:"%(cnt)
	if(flag==0):
		print "impossible"
	else:
		print ans





	