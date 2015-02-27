tc=int(raw_input())
while(tc):
	s=raw_input().split()
	sz=0
	cnt=0
	mx=0
	for i in range(0,len(s)):
		if(s[i].__len__()==sz):
			cnt+=1
		else:
			sz=s[i].__len__()
			cnt=1
		if cnt>mx:
			mx=cnt

	print mx

	
	tc-=1