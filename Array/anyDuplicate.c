//Check whether there are any duplicate elements in array or not
#include<stdio.h>
#include<limits.h>
/*
int printDuplicate(int arr[],int n)
{
 for(int i=0;i<n;i++)
 {
   if(arr[abs(arr[i])]>=0)
   {
     arr[abs(arr[i])] = -arr[abs(arr[i])];
   }
   else 
   {
    printf("%d ",abs(arr[i]));
   }
 }

 printf("\n");
}*/

# define MAX 10
int printDuplicate(int arr[],int n)
{
 
 
 printf("%d\n",INT_MIN);
 int A[MAX]={0};
 for(int i=0;i<n;i++)
 {
  A[arr[i]]++;
 }

printf("Duplicate elements are:\n");
 for(int i=0;i<MAX;i++)
 {
  if(A[i]>1)
  {
   printf("%d ",i);
  }
 }
}

int main()
{
 int arr[] = {1,2,1,3,6,4,8,9,8,4,2,2};
 int n = sizeof(arr)/sizeof(arr[0]);
 printDuplicate(arr,n);

 return 0;
}
