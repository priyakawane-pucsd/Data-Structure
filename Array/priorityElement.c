#include<stdio.h>
#include<stdlib.h>

int priorityElement(int arr[],int n)
{
 int count=0,element=-1;
 for(int i=0;i<n;i++)
 {
  if(count == 0)
  {
	element = arr[i];
	count = 1;
  }
  else if(element == arr[i])
  {
	count++;
  }
  else
  {
	count--;
  }
 }

 printf("%d\n",element);
}

int main()
{
 int arr[] = {1,3,3,3,3};
 int n = sizeof(arr)/sizeof(arr[0]);
 priorityElement(arr,n);

 return 0;
}
