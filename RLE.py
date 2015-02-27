import sys

while(1):
	try:
		s=raw_input()
	except:
		break
	s=s+'#'
	l=len(s)
	if l==4:
		for i in range(0,3):
			print s[i],
			sys.stdout.softspace=0
		print ''
		continue
	temp=s[0]
	count=1
	#print "l=",l
	for i in range(1,l):
		#print "i=",i
		if temp==s[i]:
			count+=1
		elif temp!=s[i]:
			if count>3:
				x=str(count)

				print x+"!"+temp,
				sys.stdout.softspace=0
			else:
				for j in range(0,count):
					print temp,
					sys.stdout.softspace=0
			count=1
			temp=s[i]
	print ''
