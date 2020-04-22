def printPair(arr,n,sum):
	s =set()
	for i in range(0,n):
		temp = sum-arr[i]
		if(temp in s):
			print("Pair with sum is",arr[i],"and",temp)
		s.add(arr[i])


arr = [1,4,45,6,10,8]
sum = 55
printPair(arr,len(arr),sum) 
