#Problem Statement :: Python | Check if a Substring is Present in a Given String
def checkSubstring(string,sub_str):
	if(string.find(sub_str)==-1):
		print("No")
	else:
		print("Yes")


string = "geeks for geeks"
#sub_str = "geeks"
sub_str = "home"
checkSubstring(string,sub_str)
