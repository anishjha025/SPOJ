tc=int(raw_input())
while(tc):
	n=int(raw_input())
	s=""
	if(n<10):
		if n==0:
			n+=10
		print n
	else:
		k=0
		i=9
		while(i>1):
			while(n%i==0):
				n=n/i
				temp=i
				temp=str(temp)
				s+=temp
			i-=1
		if n>10:
			print -1
		else:
			s=s[::-1]
			print s
	tc-=1