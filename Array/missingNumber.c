//Problem Statement : You are given a list of n-1 integers and these integers are in the range of 1 to n. There are no duplicates in the list. One of the integers is missing in the list. Write an efficient code to find the missing integer.

#include<stdio.h>
//Approach : 1
/*
int getMissingNumber(int arr[],int n)
{
 int sum = (n+1)*(n+2)/2;
 for(int i=0;i<n;i++)
 {
   sum = sum-arr[i];
  }
 return sum;
}*/


//Approach : 2
int getMissingNumber(int arr[],int n)
{
 int X=0,Y=0;
 for(int i=0;i<n;i++)
 {
  X ^= arr[i];
 }
 
 for(int i=1;i<=n+1;i++)
 {
  Y ^= i;
 }

 return X^Y;
}

int main()
{
 int arr[] = {1,3,5,4,2,7};
 int n = sizeof(arr)/sizeof(arr[0]);
 //printf("Array size is %d\n",n);
 int var = getMissingNumber(arr,n);
 printf("Missing number in the array is:%d\n",var);

 return 0;
}
