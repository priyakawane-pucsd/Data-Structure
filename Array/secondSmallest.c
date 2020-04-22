#include<stdio.h>
#include<limits.h>

int secondMin(int arr[],int n)
{
 int min = INT_MAX;
 int second_min = INT_MAX;
 for(int i=0;i<n;i++)
 {
  if(arr[i]<min)
	min = arr[i];
 }

 for(int i=0;i<n;i++)
 {
   if(arr[i]<second_min && arr[i]!=min)
   {
	  second_min = arr[i];
   }
}
 return second_min;
}
int main()
{
 int arr[] = {8,5,7,11,9,10,13,1};
 int n = sizeof(arr)/sizeof(arr[0]);
 printf("Second minimum element is %d\n",secondMin(arr,n));

 return 0; 
}
