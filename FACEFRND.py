n=int(raw_input())
arr=[0]*10001
for i in range(0,n):
	s=map(int,raw_input().split())
	fid=s[0]
	arr[fid]=2
	for j in range(2,len(s)):
		if(arr[s[j]]==0):
			arr[s[j]]+=1
ans=0
for i in range(0,10001):
	if arr[i]==1:
		#print i
		ans+=1
print ans
