tc=int(raw_input())
while(tc):
	a=raw_input()
	n=int(raw_input())
	s=0
	for i in range(0,n):
		temp=int(raw_input())
		s+=temp
	if s%n==0:
		print "YES"
	else:
		print "NO"
	tc-=1