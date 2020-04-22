#include<stdio.h>


//1. complexity :- O(n)      Approach : Linear search
/*
int printCeiling(int arr[],int low,int high,int x)
{
 if(x<=arr[low])
      return arr[low];
  if(x>arr[high])
	return -1;
  for(int i=low;i<high;i++)
  {
   if(arr[i]==x)
      return arr[i];

   if(x>arr[i] && x<arr[i+1])
       return arr[i+1];
  }
 return -1;
}

int main()
{
 int arr[] = {1, 2, 8, 10, 10, 12, 19};
 int n = sizeof(arr)/sizeof(arr[0]);
 int x =2 ;
 int var = printCeiling(arr,0,n-1,x);
 if(var==-1)
 {
  printf("Ceiling of %d doesn't exist in array\n ", x);
 }
 else
 {
 printf("ceiling of %d is %d \n",x,var);
 }
 return 0;
}
*/

//1. complexity :- Olog(n)       Approach: Binary Search

int printCeiling(int arr[],int low,int high,int x)
{
 if(x<=arr[low])
      return low;

  if(x>arr[high])
	return -1;

  int mid = low+(high-low)/2;  //Find median

  if(arr[mid]==x)
      return mid;

  else if(x>arr[mid])
  {
   if(mid+1<=high && x<=arr[mid+1])
      return mid+1;

   else
      return printCeiling(arr,mid+1,high,x) ;
  }
  
  else
  {
   if(mid-1>=low && x>=arr[mid-1])
      return mid;

   else
      return printCeiling(arr,low,mid-1,x) ;
  }

}

int main()
{
 int arr[] = {1, 2, 8, 10, 10, 12, 19};
 int n = sizeof(arr)/sizeof(arr[0]);
 int x =18 ;
 int var = printCeiling(arr,0,n-1,x);
 if(var==-1)
 {
  printf("Ceiling of %d doesn't exist in array.\n ", x);
 }
 else
 {
 printf("ceiling of %d is %d \n",x,arr[var]);
 }
 return 0;
}



