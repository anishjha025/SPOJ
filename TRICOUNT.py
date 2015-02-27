tc=int(raw_input())
while tc:
	tc-=1
	n=int(raw_input())
	if n%2==0:
		ans=(n*(n+2)*(2*n+1))/8
	else:
		ans=(n*(n+2)*(2*n+1)-1)/8

	print ans