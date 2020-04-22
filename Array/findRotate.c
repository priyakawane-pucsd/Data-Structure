#include<stdio.h>

int findRotate(int arr[],int start,int finish,int data)
{
 int mid = start+(finish-start)/2;
 
 if(start>finish)
	return -1;

 if(data == arr[mid])
 {
	return mid;
 }
 else if(arr[start]<=arr[mid])
 {
  if(data>=arr[start] && data<arr[mid])
		return findRotate(arr,start,mid-1,data);
  else
		return findRotate(arr,mid+1,finish,data);
 }
 else
 {
  if(data>arr[mid] && data<=arr[finish])
		return findRotate(arr,mid+1,finish,data);
  else
		return findRotate(arr,start,mid-1,data);
 }

}

int main()
{
 int arr[] = {15,16,19,20,25,1,3,4,5,7,10};
 int n = sizeof(arr)/sizeof(arr[0]);
 printf("Elements is %d\n",findRotate(arr,0,n-1,5));
 return 0;
}
