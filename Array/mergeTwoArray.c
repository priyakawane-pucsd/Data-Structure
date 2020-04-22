#include<stdio.h>

int moveToEnd(int arr[],int size)
{
 int j = size-1;
 for(int i=size-1;i>=0;i--)
 {
   if(arr[i]!=0) 
       {
	arr[j] = arr[i];
	j--;
       }
 }
}

int mergeArray(int arr[],int N[],int m,int n)
{
 int i = n;
 int j = 0;
 int k = 0;
 while(k< (m+n))
 {
  if(i<(m+n) && arr[i]<=N[j])
  {
   arr[k] = arr[i];
    k++;
    i++;
  }
  else
  {
   arr[k] = N[j];
   k++;
   j++;
  }

 }
}
 
int printArray(int mPlusN[],int size)
{
 for(int i=0;i<size;i++)
 {
   printf("%d ",mPlusN[i]);
 }
}


int main()
{
 int mPlusN[] = {2, 8, 0, 0, 0, 13, 0, 15, 20}; 
 int N[] = {5, 7, 9, 25};
 int n = sizeof(N)/sizeof(N[0]);
 int m = sizeof(mPlusN)/sizeof(mPlusN[0])-n;
 printf("%d %d\n",n,m);

 //int j=(m+n)-1;
 //printf("J is : %d\n",j);

 moveToEnd(mPlusN,m+n);
 mergeArray(mPlusN,N,m,n);
 printArray(mPlusN,m+n);
 printf("\n");
 return 0;
}
