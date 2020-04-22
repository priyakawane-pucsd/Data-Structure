#include<stdio.h>
int cycleRotate(int arr[],int n)
{
 int x = arr[n-1];
 for(int i=n-1;i>0;i--)
 {
  arr[i]=arr[i-1];
 }
 arr[0]=x;
 return arr;
/*
 for(int i=0;i<n;i++)
 {
  printf("%d\n",arr1[i]);
 }
*/
}
int main()
{
 int arr[] = {1,2,3,4,5,6,7,8,9};		//[5,1,2,3,4]
 int n = sizeof(arr)/sizeof(arr[0]);
 //printf("%d\n",n);
 cycleRotate(arr,n);
 for(int i=0;i<n;i++)
 {
  printf("%d\n",arr[i]);
 }
 return 0;
}
