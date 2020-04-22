#include<stdio.h>
#include <stdbool.h>
#define MAX 256

bool areAnagram(char *str1,char *str2)
{
 int count1[MAX]={0};
 int count2[MAX]={0};
int i;
 for(i=0;str1[i] && str2[i];i++)
 {
  count1[str1[i]]++;
  count2[str2[i]]++;
 }
 printf("*******%d\n",i);
  if (str1[i] || str2[i]) 
        return false; 
	//printf("%d %d\n",str1[i],str2[i]);
  
    // Compare count arrays 
  for (i = 0; i < MAX; i++) 
      if (count1[i] != count2[i]) 
          return false; 
  
  return true; 


}
int main()
{
 char str1[] = "geeksforgeeksA";
 char str2[] = "Aforgeeksgeeks";
 //areAnagram(str1,str2);

 if(areAnagram(str1,str2))
	printf("The two string anagrams\n");
 else
	printf("The two string not anagrams\n"); 
}


/*
 for(int i=0;i<256;i++)
 {
  printf("%d\n",count1[i]);
 }     */
 
