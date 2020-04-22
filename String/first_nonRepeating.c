//Problem statement :: Given a string, find its first non-repeating character

#include<stdio.h>
#include<string.h>
# define MAX 127

char firstNonRepeating(char *str,int n)
{
 char char_arr[MAX]={0};

 for(int i=0;i<n;i++)
 {
  char_arr[str[i]]++;
 }    

 int index  = -1;
 for(int i=0;i<MAX;i++)
 {
  if(char_arr[str[i]]==1)
  {
     index = i;
     return index;
    //printf("%c\n",str[i]);
    break;
  }
 }


/*
 int no = 0;
 for(int i=0;i<MAX;i++)
 {
  printf("%d %d\n",no,char_arr[i]);
  no++;
 }  */

}

int main()
{
 char *str = "GeeksforGeeks";
 int len = strlen(str);
 int index = firstNonRepeating(str,len);
 if(index==-1)
	printf("Either all characters are repeating or string is empty\n");
  else
	printf("First non-repeating character is %c\n", str[index]);
 return 0;
}
