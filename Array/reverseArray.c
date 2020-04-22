#include<stdio.h>

int reverseArray(int arr[],int n)
{
 int start =0,end = n-1,temp;
 while(start<end)
 {
  temp = arr[start];
  arr[start] = arr[end];
  arr[end] = temp;
  start++;
  end--;
 }
 
}

int main()
{
 int arr[]= {8,5,12,1,7,15};
 int n = sizeof(arr)/sizeof(arr[0]);
 reverseArray(arr,n);
 for(int i=0;i<n;i++)
 {
  printf("%d\t",arr[i]);
 }
 printf("\n");
 return 0;
}
