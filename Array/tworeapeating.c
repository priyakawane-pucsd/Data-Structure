//Problem Statement :: Find two elements in the array such that their sum is equal to given element k
#include<stdio.h>
#include<stdlib.h>

//Complexity :- O(n^2)
//Approach I
/*
int printTwoRepeating(int arr[],int n)
{
 int prev=arr[0],next=arr[1];
 
  for(int i=0;i<n;i++)
  {
   for(int j=i+1;j<n;j++)
   {
      if(arr[i]==arr[j])
          printf("%d ",arr[i]);
   }
  }

return -1;
}
*/

//Approach II :: By using hash table
int printTwoRepeating(int arr[],int n)
{
 int *count = (int *)calloc(sizeof(int),(n-2));
 for(int i=0;i<n;i++)
 {
  count[arr[i]]++;
  if(count[arr[i]]==2)
  {
  	printf("Element is: %d\n",arr[i]);
  }
 }
}




int main()
{
 int arr[] = {4, 2, 3, 5,2,4};
 int n = sizeof(arr)/sizeof(arr[0]);
 printTwoRepeating(arr,n);
 /*
 int var = printTwoRepeating(arr,n);
 if(var==-1)
 {
  printf("No repeating element in array.\n");
 }
 else
 {
  printf("%d ",arr[var]);
 }
 */
 //printf("\n");
 return 0;
}
