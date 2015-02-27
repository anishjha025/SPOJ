import sys
n=int(raw_input())

if(n>=587117):
	print 0
	sys.exit(0)

modu=109546051211
res=1
f=1
for i in xrange(1,n+1):
	f=(f%modu*i%modu)%modu
	res=(res%modu*f%modu)%modu
	if res==0:
		break
print res