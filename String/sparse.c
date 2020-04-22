#include<stdio.h>
#include<string.h>

int sparseArray(char *queries[],char *strings[],int m,int n)
{
 int count = 0;
 int arr[m];
 for(int i=0;i<m;i++)
 {
   //char val = queries[i];
   printf("%s\n",queries[i]);
   for(int j=0;j<n;j++)
   {
    if(queries[i]==strings[j])
     {
	count++;
     }
   }
   arr[i]=count;
   count = 0;

 }
 
 for(int i=0;i<m;i++)
	printf("%d\n",arr[i]);
 
}
int main()
{
 char *queries[] = {"aba","xzxo","ab"};
 char *strings[] = {"aba","baba","aba","xzxo"};
 int queries_count = sizeof(queries)/sizeof(queries[0]);
 int string_count = sizeof(strings)/sizeof(strings[0]);
 //-printf("%d\n",queries_count);
sparseArray(queries,strings,queries_count,string_count);
 return 0;
}
