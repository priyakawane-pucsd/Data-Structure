#include<stdio.h>
int oddNumber(int arr[],int n)
{
 int i,count;
 for(i=0;i<n;i++)
 {
   count = 0;
     for(int j=0;j<n;j++)
    {
        if(arr[i]==arr[j])
	  count++;
    }
   if(count%2!=0)
	return arr[i];
 }
 return -1;
}

int main()
{
 int arr[] = {1,2,3,3,1,3,2,3,1};
 int n = sizeof(arr)/sizeof(arr[0]);
 int var = oddNumber(arr,n);
 if(var== -1)
 {
  printf("No any number is occuring odd time in array.\n"); 
 }
 else
 { 
  printf("The odd number in array is:%d\n",var);
 }
 return 0;
}
