#include<stdio.h>

int printLargest(int arr[],int n)
{
 int max =0;
 for(int i=0;i<n;i++)
 {
  if(arr[i]>max)
     max = arr[i];
 }
 return max;
}

int main()
{
 int arr[] = {5,100,15,20};
 int n = sizeof(arr)/sizeof(arr[0]);
 int var;
 var = printLargest(arr,n);
 printf("Largest element is : %d\n",var);
 return 0;

}
