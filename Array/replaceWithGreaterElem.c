#include<stdio.h>

//1. Complexity :- O(n^2)

/*
int replaceGreaterElem(int arr[],int n)
{
 int max_elem;
 for(int i=0;i<=n-1;i++)
 {
  max_elem = arr[i+1];
  for(int j=i+1;j<n;j++)
  {
   if(max_elem < arr[j])
         max_elem = arr[j];
  } 
  arr[i]=max_elem;  
 }
 arr[n-1]=-1;

 for(int i=0;i<n;i++)
 {
  printf("%d ",arr[i]);
 }
}


int main()
{
 //int arr[] = {16, 17, 4, 3, 5, 2};
 int arr[] = {8,12,1,15,3,6};
 int n = sizeof(arr)/sizeof(arr[0]);
 replaceGreaterElem(arr,n);

 return 0;
}

*/

int replaceGreaterElem(int arr[],int n)
{
 int max_from_right = arr[n-1];
 arr[n-1] = -1;
 
 for(int i=n-2;i>=0;i--)
 {
  int temp = arr[i];
  arr[i] = max_from_right;

  if(temp > arr[i])
      max_from_right = temp;
 }

}

void printArray(int arr[], int size) 
{ 
  int i; 
  for (i=0; i < size; i++) 
    printf("%d ", arr[i]); 
  printf("\n"); 
} 


int main()
{
 //int arr[] = {16, 17, 4, 3, 5, 2};
 int arr[] = {8,12,1,15,3,6};
 int n = sizeof(arr)/sizeof(arr[0]);
 replaceGreaterElem(arr,n);
 printArray(arr,n);
 return 0;
}
