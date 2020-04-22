//Problem Statement :: Search, insert and delete in an unsorted array
//Time complexity :: O(n)
#include<stdio.h>

int findIndex(int arr[],int n,int key)
{
 int i;
 for(i=0;i<n;i++)
 {
  if(arr[i]==key)
   {
	 break;
   }
 }
 return i;
}

int deleteElement(int arr[],int n,int key)
{
 int pos = findIndex(arr,n,key);

 for(int i=pos;i<n-1;i++)
  {
   arr[i]= arr[i+1];
  }
 n--;
}

int main()
{
 int arr[] = {10, 50, 30, 40, 20};
 int n = sizeof(arr)/sizeof(arr[0]);
 printf("sizeof array is:%d\n",n);
 int key = 50;
 n = deleteElement(arr,n,key);
 for(int i=0;i<n;i++)
 {
  printf("%d ",arr[i]);
 }
 printf("\n");
 return 0;
}
