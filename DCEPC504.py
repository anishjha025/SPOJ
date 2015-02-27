tc=int(raw_input())
while tc:
	k,n=map(int,raw_input().split())
	c=0
	if n==1:
		print "Male"
	elif n==2:
		print "Female"
	else:
		n=n-1
		while n>1:
			if n%2!=0:
				c+=1
			n=n/2
		if c%2==0:
			print "Female"
		else:
			print "Male"


	tc-=1