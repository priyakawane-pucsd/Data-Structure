#include<stdio.h>
#include<limits.h>
/*
int secondMax(int arr[],int n)
{
 int max = INT_MIN;
 int second_max = INT_MIN;
 for(int i=0;i<n;i++)
 {
  if(arr[i]>max)
	max = arr[i];
 }

 for(int i=0;i<n;i++)
 {
   if(arr[i]>second_max && arr[i]!=max)
   {
	  second_max = arr[i];
   }
}
 return second_max;
}
int main()
{
 int arr[] = {8,5,7,11,9,10,13};
 int n = sizeof(arr)/sizeof(arr[0]);
 printf("Second max is %d\n",secondMax(arr,n));

 return 0; 
}
*/

int findSecondMax(int arr[],int n)
{
 int max = INT_MIN;
 int second_max = INT_MIN;
  for(int i=0;i<n;i++)
  {
 	 if(arr[i]>max)
 	 {
 	  max = arr[i];
 	 }
 }

 for(int i=0;i<n;i++)
 {
  if(arr[i]>second_max && arr[i]!=max)
  {
	second_max = arr[i];
  }
 }

 return second_max;
}

int main()
{
 int arr[]={3,23,1,5,6,12,45};
 int n = sizeof(arr)/sizeof(arr[0]);
 printf("Second max is %d\n",findSecondMax(arr,n));

 return 0;
}

