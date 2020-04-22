//Problem Statement :: Reverse an array in groups of given size

#include<stdio.h>
#include<stdlib.h>

int reverseKGroupArray(int arr[],int n,int k)
{
 int i=0;
 int left,right,m=k;
 while(i<n && k<n)
 {
   left = i;
   right = k-1;
   printf("i  k  n value\n");
   printf("%d %d %d\n",i,k,n);
   while(left<right)
   {
     int temp = arr[left];
     arr[left] = arr[right];
     arr[right] = temp;
      left++;
      right--;
   }
    i=k;
    k = i+m;
 }

m = n-1;
while(i<m)
{
 int temp = arr[i];
     arr[i] = arr[m];
     arr[m] = temp;
      i++;
      m--;
}
	 
for(int i=0;i<n;i++)
{
 printf("%d ",arr[i]); 
}
printf("\n");

}


int main()
{
 int arr[] = {1, 2, 3, 4, 5, 6, 7, 8,9};
 int n = sizeof(arr)/sizeof(arr[0]);
 //printf("%d\n",n);
 int k=3;
 reverseKGroupArray(arr,n,k);
 
 return 0;
}
