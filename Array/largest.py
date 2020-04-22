def printLargest(arr,n):
	max = 0
	for i in range(0,n):
		if(arr[i]>max):
			max = arr[i]
	return max
arr = [50,100,30]
var = printLargest(arr,len(arr))
print("The largest is is",var)
