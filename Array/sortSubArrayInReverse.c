//Problem Statement :: Sort an array where a subarray of a sorted array is in reverse order
//Complexity : O(n)
#include<stdio.h>
#include<stdlib.h>

int printSubArray(int arr[],int n)
{
 int front=-1,back=-1;

 //find the starting index of the reversed subarry 
 for(int i=1;i<n;i++)
 {
  if(arr[i]<arr[i-1])
  {
   front = i-1;
   break;
  }
 }

//find the ending index of the reversed subarry 
for(int i=n-2;i>=0;i--)
 {
  if(arr[i]>arr[i+1])
  {
   back = i+1;
   break;
  }
 }

if(front==-1 && back==-1)
{
 for(int i=0;i<n;i++)
     printf("%d ",arr[i]);
}

while(front<back)
{
 int temp = arr[front];
 arr[front] = arr[back];
 arr[back] = temp;
 front++;
 back--;
}


 for(int i=0;i<n;i++)
     printf("%d ",arr[i]);

}

int main()
{
 int arr[] = {1, 7, 6, 5, 4, 3, 2, 8};
 int n = sizeof(arr)/sizeof(arr[0]);
 printSubArray(arr,n);
 return 0;

}
