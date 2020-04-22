//Give an algorithm for finding the elements which appears maximum numbers of time in the array

#include<stdio.h>
#include<limits.h>
/*
# define MAX 15
int printDuplicate(int arr[],int n)
{
 int A[MAX]={0};
 for(int i=0;i<n;i++)
 {
  A[arr[i]]++;
 }

 int max = 0;
 for(int i=0;i<MAX;i++)
 {
  printf("%d\n",A[i]);
  if(A[i]>=max)
  {
   max = i;
   //printf("MAx: %d\n",max);
  }
 }
 return max;
}
*/
int printDuplicate(int arr[],int n)
{
 int max=0,maxIndex;
 for(int i=0;i<n;i++)
 {
  arr[arr[i]%n] += n;
 }

 for(int i=0;i<n;i++)
 {
  printf("%d\n",arr[i]);
  if(arr[i]/n>max)
  {
    max = arr[i]/n;
    maxIndex = i;
  }
 }
 return maxIndex;
}

int main()
{
 int arr[] = {2,1,3,5,8,2};
 int n = sizeof(arr)/sizeof(arr[0]);
 int val = printDuplicate(arr,n);
 printf("%d Occurs maximum number of times in array\n",val);

 return 0;
}
