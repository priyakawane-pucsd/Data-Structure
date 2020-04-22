#include<stdio.h>
#include<stdbool.h>
#define MAX 10000

int printSum(int arr[],int n,int sum)
{
 int temp;
 bool s[MAX] = {0};
 for(int i=0;i<n;i++)
 {
  temp = sum-arr[i];
  if(s[temp]==1)
	printf("The pair with sum %d is (%d,%d)\n",sum,temp,arr[i]);
  
  s[arr[i]]=1;
 }

}


int main()
{
 int arr[] = {1,4,45,6,10,8};
 int arr_size = sizeof(arr)/sizeof(arr[0]);
 printf("%d\n",arr_size);
 int x = 18;
 printSum(arr,arr_size,x);
 return 0;
}
