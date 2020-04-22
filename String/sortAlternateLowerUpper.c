//Problem statement ::  Alternate Lower Upper String Sort 
#include<stdio.h>
#include<string.h>
#define MAX 26

char sortAlternateLowerUpper(char *str,int n)
{
 int uCount[MAX]={0};
 int lCount[MAX]={0};

 for(int i=0;i<n;i++)
 {
   if(str[i]>='A' && str[i]<='Z')
   {
     uCount[str[i]-'A']++;
   }
   else
   {
    lCount[str[i]-'a']++;
   }
 }

for(int i=0;i<MAX;i++)
{
 printf("%d ",uCount[i]);
}
printf("\n");

for(int i=0;i<MAX;i++)
{
 printf("%d ",lCount[i]);
}


int i = 0, j = 0, k = 0;
 
while (k < n) 
 { 
    while (i < MAX && uCount[i] == 0) 
    {
            i++; 
     }

     if (i < MAX)
     { 
         str[k] = 'A' + i; 
         uCount[i]--; 
         k++;
     } 
 
     while (j < MAX && lCount[j] == 0) 
     {
            j++; 
     }
     if (j < MAX)
     { 
         str[k] = 'a' + j; 
         lCount[j]--; 
         k++;
     }	

 } 
 
}

int main()
{
 char *str = "bAwutndekWEdkd";
 int n = strlen(str);
 sortAlternateLowerUpper(str,n);

 return 0;
}
