#include<stdio.h>

int findNextGreaterElement(int arr[],int n)
{
 int max_element;
 for(int i=0;i<n;i++)
 {
  max_element = -1;
  for(int j=i+1;j<n;j++)
  {
   if(arr[i]<arr[j])
    {
      max_element = arr[j];
      //arr[i] = max_element;
      break;
    }
  }
   printf("%d ",max_element);
 }
  
 
}


int main()
{
 int arr[] = {4,5,2,25};
 //int arr[] = {13,7,6,12};
 int n =sizeof(arr)/sizeof(arr[0]);
 findNextGreaterElement(arr,n);

 return 0;
}
