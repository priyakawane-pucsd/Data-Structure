#include<stdio.h>

int findTriplet(int arr[],int n,int sum)
{
 for(int i=0;i<n-2;i++)
 {
  for(int j=i+1;j<n-1;j++)
  {
   for(int k=j+1;k<n;k++)
   {
    if(arr[i]+arr[j]+arr[k]==sum)
    {
     printf("Triplet is %d %d %d\n",arr[i],arr[j],arr[k]);
     }
   }
  }
 }
 return -1;
}
int main()
{
 //int arr[] = {12,3,4,1,6,9};
  int arr[] = {1, 4, 45, 6, 10, 8};
 int n = sizeof(arr)/sizeof(arr[0]);
 findTriplet(arr,n,22);
 return 0;
}
