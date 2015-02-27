tc=int(raw_input())
for i in range(0,tc):
	s=raw_input()
	s1=s[::-1]
	if s1==s:
		print "YES"
	else:
		print "NO" 