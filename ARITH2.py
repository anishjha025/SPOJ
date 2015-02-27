tc=int(raw_input())
while(tc):
	x=raw_input()
	s=raw_input().split()
	a=int(s[0])
	i=1
	while(s[i]!='='):
		b=int(s[i+1])
		if s[i]=='+':
			a=a+b
		elif s[i]=='-':
			a=a-b
		elif s[i]=='*':
			a=a*b
		elif s[i]=='/':
			a=a/b
		i+=2
	print a

	tc-=1