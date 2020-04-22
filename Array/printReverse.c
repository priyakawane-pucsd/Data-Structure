#include<stdio.h>
int reverseElement(int arr[],int n)
{
 for(int i=n-1;i>=0;i--)
 {
  printf("%d",arr[i]);
 }
 printf("\n");
}


int main()
{
 int arr[] = {4,5,1,2};
 int arr_size = sizeof(arr)/sizeof(arr[0]);
 reverseElement(arr,arr_size);
 return 0;
}
