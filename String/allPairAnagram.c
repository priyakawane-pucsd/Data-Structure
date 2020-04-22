#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define MAX 256

bool areAnagrams(char *str1,char *str2)
{
 printf("%s\n",str1);
 printf("%s",str2);
 
 int count[MAX]={0};
 int i;
 for(i = 0; str1[i] && str2[i];i++) 
    { 
        count[str1[i]]++; 
        count[str2[i]]--; 
    } 

if (str1[i] || str2[i]) 
      return false; 
  
    // See if there is any non-zero value in count array 
    for (i = 0; i < MAX; i++) 
        if (count[i]) 
            return false; 
     return true; 
}
void findAllAnagrams(char arr[],int n) 
{
 for(int i=0;i<n;i++)
  {
   for(int j=i+1;j<n;j++)
     {
          areAnagrams(arr[i],arr[j]);
	//if(areAnagrams(arr[i],arr[j]))
	  // printf("%c is anagram of %c",arr[i],arr[j]);
      }
   printf("\n");
  }

}

int main()
{
 char *arr[]  = {"geeksquiz", "geeksforgeeks", "abcd","forgeeksgeeks", "zuiqkeegs"};
 int n = sizeof(arr)/sizeof(arr[0]);
 findAllAnagrams(arr, n); 
    
 return 0; 
}
