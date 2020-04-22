#include<stdio.h>

int printDuplicate(int arr[],int n)
{
  for(int i=0;i<n-1;i++)
  {
   for(int j=i+1;j<n;j++)
   {
    if(arr[i]==arr[j])
    {
      printf("%d ",arr[i]);
    }
   }

  }


}

int main()
{
 int arr[] = {2,1,2,3,1,9,4,3,6,6,8,8,9};
 int n = sizeof(arr)/sizeof(arr[0]);
 printDuplicate(arr,n);

 return 0;
}
