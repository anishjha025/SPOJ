tc=input()
while(tc):
	n=input()
	arr=raw_input().split()
	s=0
	for i in range(0,n):
		y=int(arr[i])
		if i%2==1:
			s=s-y
		else:
			s=s+y
	if(s):
		print "NO"
	else:
		print "YES"

	tc-=1