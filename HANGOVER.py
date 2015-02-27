while(1):
	n=input()
	if(n==0):
		break
	s=0
	c=2
	ans=0
	while(s<n):
		s=s+(1.0/c)
		c+=1
		ans+=1
	
	ans=str(ans)	
	print ans+" card(s)"