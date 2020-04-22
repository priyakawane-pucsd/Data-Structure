//Problem Statement :: Check if a string is substring of another
#include<stdio.h>
#include<string.h>

int subString(char *s1,char *s2)
{
 int m = strlen(s1);
 int n = strlen(s2);
 
 for(int i=0;i<n-m;i++)
 {
   int j;
   for(j=0;j<m;j++)
   {
     if(s2[i+j]!=s1[j])
	break;
   }
    if(j==m)
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
 char *s1 = "geeks";
 char *s2 = "geeksforgeeks";
 int index = subString(s1,s2);
 if(index == -1)
  	printf("Substring not present in string\n");
 else
	printf("Substring present at index %d\n",index);
 return 0;

}
