#include<stdio.h>
#include<stdbool.h>
#include<string.h>
# define MAX 256



bool compare(char *countP,char *countTW)
{
 for(int i=0;i<MAX;i++)
 {
   if(countP[i]!=countTW[i])
	return false;
 }
 return true;

}


char search(char *txt, char *pat)
{
 char countP[MAX]={0};
 char countTW[MAX]={0};
 int M = strlen(pat),N=strlen(txt);
 
 for(int i=0;i<M;i++)
 {
   countP[txt[i]]++;
   countTW[pat[i]]++;
 }
 
for(int i=M;i<N;i++)
{
 if(compare(countP,countTW))
   {
    printf("Fount at index %d\n",(i-M));
   }
 countTW[txt[i]]++;

 countTW[txt[i-M]]--;

}
if (compare(countP, countTW)) 
	printf("Fount at index %d\n",(N-M));
}

int main()
{
 char *txt = "AAABABAA";
 char *pat = "AABA";
 search(txt,pat);

 return 0;
}
