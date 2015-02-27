import math
n=int(raw_input())
temp =math.sqrt(n)
temp=int(temp)
ans=0
for i in range(1,temp+1):
	ans+=(n/i)-(i-1)

print ans

