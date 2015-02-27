tc=int(raw_input())
while(tc):
	n,s=map(int,raw_input().split())
	if s==0:
		print "Airborne wins."
	else:
		print "Pagfloyd wins."
	tc-=1