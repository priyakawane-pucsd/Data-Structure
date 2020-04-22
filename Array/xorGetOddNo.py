def getOddNumber(arr):
	res = 0
	for each in arr:
		res = res^each
	return res 

arr = [ 2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2,5,4] 
print(getOddNumber(arr))
