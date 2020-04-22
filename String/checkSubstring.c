//Problem Statement :: Check if a string is substring of another
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int subString(char *s1,char *s2)
{
 int m = strlen(s1);
 int n = strlen(s2);
 int k=0;
 for(int i=0;i<n-m;i++)
 {
   int j;
   for(j=0;j<m;j++)
   {
     if(s2[i+j]==s1[j])
	  {
		//break;
		k++;
	  }
   }
	//printf("%d\n",k);
    if(k==m)
	return i;
 }

 return -1;


/*
for(int k=0;k<MAX;k++)
{
printf("%d\n",count_arr2[k]);
}*/
}


int main()
{
 char *s1 = "for";
 char *s2 = "geeksforgeeks";
 int val = subString(s1,s2);
 if(val!=-1)
  	printf("Substring is present at index %d in string\n",val);
 else
	printf("Substring not present string\n");
 
 return 0;
}
