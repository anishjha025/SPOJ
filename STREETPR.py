
def gcd(a,b):
	if b==0:
		return a
	else:
		return gcd(b,a%b)

n=int(raw_input())
n1=n
arr=[]
temp1=int(raw_input())
n-=1
while(n):
	temp2=int(raw_input())
	arr.append(temp2-temp1)
	temp1=temp2
	n-=1
g=gcd(arr[0],arr[1])
for i in range(2,n1-1):
	g=gcd(g,arr[i])
ans=0
for i in range(0,n1-1):
	ans+=((arr[i]/g)-1)
print ans
