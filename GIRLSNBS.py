from math import *
while(1):
	g,b=map(int,raw_input().split())
	if g==-1 and b==-1:
		break
	if g>b:
		ans=ceil((g*1.0)/(b+1))
	else:
		ans=ceil((b*1.0)/(g+1))
	print int(ans)