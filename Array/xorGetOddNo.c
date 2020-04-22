#include<stdio.h>

int getOddNumber(int arr[],int n)
{
 int res=0;
 for(int i=0;i<n;i++)
 {
  res = res^arr[i];
 }
 return res;
}

int main()
{
 int arr[] = {1,2,3,1,2,1,3,1,3};
 int n = sizeof(arr)/sizeof(arr[0]);
 int var = getOddNumber(arr,n);
 printf("The odd number occuring in array is: %d\n",var);
 
 return 0;
}
