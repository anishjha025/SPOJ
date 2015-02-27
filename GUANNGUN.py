while 1:
	try:
		n=int(raw_input())
	except:
		break
	if n<10:
		print n*n
	else:
		x=((n-10)/9)+1
		y=10+((x-1)*9)
		z=((81*x)+1)+((n-y)*(n-y+2))
		print z