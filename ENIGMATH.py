
def gcd(a,b):
	if b==0:
		return a
	else:
		return gcd(b,a%b)

tc=int(raw_input())
while(tc):
	a,b=map(int,raw_input().split())
	gc=gcd(a,b)

	a=a/gc
	b=b/gc
	print b,a
	tc-=1 