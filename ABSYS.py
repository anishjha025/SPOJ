tc=raw_input()
tc=int(tc)
while(tc):
	x=raw_input()
	s=raw_input().split()
	a=s[0]
	b=s[2]
	c=s[4]
	if(a.isdigit()==False):
		a=int(c)-int(b)
	if(b.isdigit()==False):
		b=int(c)-int(a)
	if(c.isdigit()==False):
		c=int(a)+int(b)
	a=str(a)
	b=str(b)
	c=str(c)
	print a+" + "+b+" = "+c
	tc-=1