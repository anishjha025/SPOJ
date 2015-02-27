import sys
n,r=map(int,raw_input().split())
n-=1
r-=1
if r>n:
	print -1
	sys.exit(0)
res=1
t=n
for j in xrange(1,r+1):
	res=res*t/j
	t-=1
res=res%10000007
print res