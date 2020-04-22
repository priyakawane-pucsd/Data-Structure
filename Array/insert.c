//Problem Statement :: Search, insert and delete in an unsorted array
//Time complexity :: O(n)
#include<stdio.h>

int insertElement(int arr[],int size,int n,int key)
{
 if(n>=size)
	return n;

 arr[n] = key;
 return (n+1);

}

int main()
{
 int arr[20] = {10,20,30,40,50};
 int size = sizeof(arr)/sizeof(arr[0]);
 printf("sizeof array is:%d\n",size);
 int n = 5;
 int key = 26;
 n = insertElement(arr,size,n,key);
 for(int i=0;i<n;i++)
 {
  printf("%d ",arr[i]);
 }
 printf("\n");
 return 0;
}
