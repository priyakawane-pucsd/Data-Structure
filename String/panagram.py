def checkPanagram(s):
	List=[]
	for i in range(26):
		List.append(False)

	for c in s.lower():
		if not c == " ": 
			List[ord(c) -ord('a')]=True 
	
	for ch in List:
		if ch == False:
			return False
	return True


sentence = "The quick brown fox jumps over the little lazy dog"
if(checkPanagram(sentence)):
	print ('"'+sentence+'"')
	print ("is a pangram")
else: 
	print ('"'+sentence+'"')
	print ("is not a pangram")
