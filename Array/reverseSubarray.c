#include<stdio.h>

int reverseSubarray(int arr[],int i,int k,int n)
{
 int var=k;
 while(i<=k-1)
 {
  int temp=arr[i];
   arr[i]=arr[k-1];
   arr[k-1]=temp;
   i++;
   k--; 
 }
   i=var+1;
   k=var+var;
 reverseSubarray(arr,i,k,n);
 for(int i=0;i<n;i++)
 {
  printf("%d ",arr[i]);
 }

// return arr;
 

}

int main()
{
 int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9};
 int k=5;
 int n = sizeof(arr)/sizeof(arr[0]);
 reverseSubarray(arr,0,k,n);
 /*
 for(int i=0;i<n;i++)
 {
  printf("%d ",arr[i]);
 }
*/
 printf("\n");
 return 0;
}
