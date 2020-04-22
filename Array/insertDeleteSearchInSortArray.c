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

int searchElement(int arr[],int key1,int low,int high)
{
 if(high<low)
	 return -1;
 int mid = (low+high)/2;
 if(arr[mid]==key1)
	return mid;
 if(arr[mid]<key1)
   return searchElement(arr,key1,mid+1,high);

  return searchElement(arr,key1,low,mid-1);

}

int insertElement(int arr[],int n,int key)
{
 int i;
 for(i=n;(i>=0 && arr[i]>key);i--)
 {
  arr[i] = arr[i-1];
 }
 arr[i+1]=key;
 return (n+1);
}



int main()
{
 int arr[] = {10,20,30,40,50};
 int n = sizeof(arr)/sizeof(arr[0]);
 //printf("sizeof array is:%d\n",n);
 int key = 45,key1=40;
 int val = searchElement(arr,key1,0,n-1);
 printf("Serach element in sorted array\n");
 if(val==-1)
 {
  printf("Key is not in array\n");
 }
 else
 {
  printf("Key is forund at index %d\n",val);
 }
 n = insertElement(arr,n,key);
 printf("Insert element in sorted array\n");
 for(int i=0;i<n;i++)
 {
  printf("%d ",arr[i]);
 }
  printf("\n");
  printf("Delete element from sorted array\n");
 n = deleteElement(arr,n,key1);
 printf("Insert element in sorted array\n");
 for(int i=0;i<n;i++)
 {
  printf("%d ",arr[i]);
 }
 printf("\n");
 return 0;
}
