
maxi=1400
primes=[1]*maxi
for i in range(2,maxi):
    if(primes[i]):
        j=i
        while (i*j<maxi):
           
            primes[i*j]=0
            j+=1
prime=[]

for i in range(2,maxi):
    if(primes[i]):
        prime.append(i)


lucky=[]
for i in range(1,2665):
	n=i
	flag=0
	j=0
	while(j<len(prime) and prime[j]<=n):
		k=prime[j]
		if(n%k==0):
			#print n,k
			flag+=1
			while(n%k==0):
				n=n/k
		j+=1
	
	if flag>=3:
		lucky.append(i)



tc=int(raw_input())
while(tc):
	n=int(raw_input())
	print lucky[n-1]
	tc-=1
	