while(1):
	try:
		n=raw_input()
	except:
		break
	n=int(n)
	if n==0:
		print 0
	elif n==1:
		print 1
	else:
		print 2*n-2