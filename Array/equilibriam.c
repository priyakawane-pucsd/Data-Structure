#include<stdio.h>

//####### O(n)^2 approach   #################

/*
int findEquilibrium(int arr[],int n)
{
 int leftsum,rightsum,sum=0;
 for(int i=0;i<n;i++)
 {
   leftsum =0;
  for(int j=0;j<i;j++)
  {
   leftsum += arr[j];
  }
   rightsum = 0;
  for(int j=i+1;j<n;j++)
  {
   rightsum += arr[j];
  }
  
  if(leftsum == rightsum)
  {
   return i;
  }
 }

 return -1;
}

int main()
{
 //int arr[] = {-7,1,5,2,-4,3,0};
 int arr[] = {1,2,3};
 int size = sizeof(arr)/sizeof(arr[0]);
 int var = findEquilibrium(arr,size);

 printf("Equilibrium index is %d\n",var);

 return 0;
}
*/

int findEquilibrium(int arr[],int n)
{
 int sum = 0, leftsum=0;
 for(int i=0;i<n;i++)
 {
  sum = sum+arr[i];
 }

 for(int i=0;i<n;i++)
 {
  sum = sum-arr[i];
  if(leftsum == sum)
  {
   return i;
  } 
  leftsum = leftsum + arr[i];

 }
 return -1;
}



int main()
{
 int arr[] = {-7,1,5,2,-4,3,0};
 //int arr[] = {1,2,3};
 int size = sizeof(arr)/sizeof(arr[0]);
 int var = findEquilibrium(arr,size);

 printf("Equilibrium index is %d\n",var);

 return 0;
}
