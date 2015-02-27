import sys

def gcd(a,b):
    if(b==0):
        return a
    else:
        return gcd(b,a%b) 
       

def main():
    t=input()
    t=int(t)
    while(t>0):
        s=input().split()
        a=int(s[0])
        b=int(s[1])
        ans=gcd(a,b)
        print(ans)
        t=t-1
    
    sys.exit(0)
main()