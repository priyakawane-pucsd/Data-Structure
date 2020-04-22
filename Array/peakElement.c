#include<stdio.h>
//complexity :- o(n)
/*
int findPeakElement(int arr[],int n)
{
 int sum=0;
 for(int i=0;i<n-1;i++)
 {
   if(arr[i]>sum && arr[i]>arr[i+1])
   {
    printf("Peak Element is : %d\n ",arr[i]);   
   }
   sum = arr[i];  
 }
}

int main()
{
 //int arr[] = {5,10,20,15};
 int arr[] = {10, 20, 15, 2, 23, 90, 67};
 int n = sizeof(arr)/sizeof(arr[0]);
 findPeakElement(arr,n);

 return 0;
}

*/


//Complexity :- o(logn)
int findPeakElement(int arr[],int low,int high,int n)
{
 int mid =low + (high-low)/2; 
 if((mid==0 || arr[mid-1]<=arr[mid])&&(mid==n-1 || arr[mid+1]<=arr[mid]))
  return mid;

 else if(mid>0 && arr[mid-1]>arr[mid])
   return findPeakElement(arr,low,mid-1,n);

 else
   return findPeakElement(arr,mid+1,high,n);

}


int main()
{
 int arr[] = {5,10,15,20,15};
 //int arr[] = {1, 3, 20, 4, 1, 0};
 int n = sizeof(arr)/sizeof(arr[0]);
 
 printf("Peak element index is:%d\n",findPeakElement(arr,0,n-1,n));

 return 0;
}
