#include<stdio.h>
//Problem statement :: Find the number which occur odd number of times

int findOddNoOfTimeNumberOccur(int arr[],int n)
{
 int X;
 //printf("%d\n",X);
 for(int i=0;i<n;i++)
 {
  X ^= arr[i];
 }
 return X;
}

int main()
{
 int arr[] = {1,2,3,2,3,1,3};
 int n = sizeof(arr)/sizeof(arr[0]);
 //printf("Array size is %d\n",n);
 int var = findOddNoOfTimeNumberOccur(arr,n);
 printf("Odd number of times number occured is:%d\n",var);

 return 0;
}
