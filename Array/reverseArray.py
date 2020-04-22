'''
def reverseArray(arr,start,end):
	while(start<end):
		temp = arr[start]
		arr[start] = arr[end]
		arr[end] =temp
		start += 1
		end -= 1 
'''

def reverseArray(A,start,end):
	while start<end:
		A[start], A[end] = A[end], A[start]
		start += 1;
		end -= 1;



arr = [15,7,1,12,5,8]
print("Original array:",arr)

reverseArray(arr,0,len(arr)-1)
print("Reverse array:",arr)
