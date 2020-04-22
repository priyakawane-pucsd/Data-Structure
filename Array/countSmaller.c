#include<stdio.h>

int countSmaller(int arr[],int n)
{
 int count = 0;
 for(int i=0;i<=n-1;i++)
 {
  for(int j=i+1;j<n;j++)
  {
   if(arr[i]>arr[j])
   {
     count++;
   }
  }
   arr[i] = count;
   count = 0;
 }
  return arr;
}

int main()
{
 int arr[] = {12,1,2,3,0,11,4};
 int n = sizeof(arr)/sizeof(arr[0]);
 countSmaller(arr,n);
 for(int i=0;i<n;i++)
 {
  printf("%d ",arr[i]);
 }
 printf("\n");
 return 0;
}
