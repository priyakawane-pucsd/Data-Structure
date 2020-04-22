#include<stdio.h>

int bubbleSort(int arr[],int n)
{
 for(int pass=n-1;pass>=0;pass--)
 {
  for(int i=0;i<pass;i++)
  {
   if(arr[i]>arr[i+1])
   {
    int temp=arr[i];
	arr[i] = arr[i+1];
	arr[i+1] = temp;
   }
  }
 }
 return arr;
}

int main()
{
 int arr[] = {3,8,7,5};
 int n = sizeof(arr)/sizeof(arr[0]);
 bubbleSort(arr,n);
 for(int i=0;i<n;i++)
 {
  printf("%d ",arr[i]);
 }
 printf("\n");
 return 0;
}
