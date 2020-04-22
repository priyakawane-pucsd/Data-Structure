#include<stdio.h>

int segregateArray(int arr[],int n)
{
 int count =0,count1=0;
 for(int i=0;i<n;i++)
 {
  if(arr[i]==0)
   {
   count++;
   }

  if(arr[i]==1)
   {
   count1++;
   }
  
 }
 printf("%d\n",count);
  printf("%d\n",count1);
}

int main()
{
 int arr[] = {0, 0, 1, 1, 2, 2};
 int n = sizeof(arr)/sizeof(arr[0]);
 segregateArray(arr,n);
 return 0;
}
