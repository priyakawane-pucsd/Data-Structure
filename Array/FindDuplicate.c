#include<stdio.h>

int printDuplicate(int arr[],int n)
{
 for(int i=0;i<n;i++)
 {
   if(arr[abs(arr[i])]>=0)
   {
     arr[abs(arr[i])] = -arr[abs(arr[i])];
   }
   else 
   {
    printf("%d ",abs(arr[i]));
   }
 }

 printf("\n");


}

int main()
{
 int arr[] = {1,2,3,1,3,6,6,4,8,9,8,4};
 int n = sizeof(arr)/sizeof(arr[0]);
 printDuplicate(arr,n);

 return 0;
}
