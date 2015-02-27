
def solve(n):
	ans=[]
	dick="manku"
	while(n>0):
		ans.append(dick[(n-1)%5])
		n=(n-1)/5
	ans=ans[::-1]
	ans=''.join(ans)
	print ans

tc=int(raw_input())
while(tc):
	n=int(raw_input())
	solve(n)
	tc-=1