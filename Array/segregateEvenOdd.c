#include<stdio.h>

int segregateEvenOdd(int arr[], int n)
{/*
 int count = 0;
 int temp[n],k=0;
 for(int i=0;i<n;i++)
 {
  if(arr[i]%2==0)
   {
     temp[k] = arr[i];
     k++;
     count++;
   }
 }

 for(int i=0;i<n;i++)
 {
  if(arr[i]%2!=0)
   {
    temp[k++] = arr[i];
   }
 }
 
 for(int i=0;i<n;i++)
 {
  printf("%d ",temp[i]);
 }*/


 int j = -1; 
  
    // quick sort method 
    for (int i = 0; i < n; i++) { 
  
        // if array of element 
        // is odd then swap 
        if (arr[i] % 2 == 0) { 
  
            // increment j by one 
            j++; 
  
            // swap the element 
            int temp = arr[i];
			arr[i] = arr[j]; 
			arr[j] = temp;
        } 
    } 

  for(int i=0;i<n;i++)
 {
  printf("%d ",arr[i]);
 }

}
int main()
{
 //int arr[] = {12,34,45,9,8,90,3};
  int arr[] = {1,2,3,4,5,6,7,8,9,10};
 int n = sizeof(arr)/sizeof(arr[0]); 
  segregateEvenOdd(arr,n);
  
 printf("\n");
 return 0;
}
