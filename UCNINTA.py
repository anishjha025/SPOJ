n=int(raw_input())
ans=[0]*1000
arr=[[0 for x in range(1001)] for x in range(1001)] 
for i in range(0,n):
	s=map(int,raw_input().split())
	for j in range(0,n):
		arr[i][j]=s[j]
if n==2:
	print "1 1"
else:
	for i in range(1,n-1):
		ans[i]=(arr[0][i]+arr[i][n-1]-arr[0][n-1])/2
	ans[0]=arr[0][1]-ans[1]
	ans[n-1]=arr[0][n-1]-ans[0]
	for i in range(0,n):
		print ans[i],
	print ''