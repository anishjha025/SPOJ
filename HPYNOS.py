n=int(raw_input())
temp=n
s=0
cnt=0
while s!=1 and s!=2 and s!=3 and s!=4 and s!=5 and s!=6 and s!=7 and s!=8 and s!=9:
	s=0
	while temp!=0:
		r=temp%10
		s+=(r*r)

		temp=temp/10
	temp=s
	cnt+=1
if s==1:
	print cnt
else:
	print -1