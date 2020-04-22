#include<stdio.h>
int segregateArray(int arr[],int n,int count)
{
  for(int i=0;i<count;i++)
	arr[i] = 0;
  for(int i=count;i<n;i++)
	arr[i] = 1;
}

int main()
{
 int arr[] = {0,1,0,1,0,0,1,1,1,0,0};
 int n = sizeof(arr)/sizeof(arr[0]);
 int count = 0;
 for(int i=0;i<n;i++)
 {
  if(arr[i]==0)
  {
   count++;
  }
 }
 printf("%d\n",count);
 segregateArray(arr,n,count);
 for(int i=0;i<n;i++)
 {
  printf("%d ",arr[i]);
 }
 printf("\n");
 return 0;
}
