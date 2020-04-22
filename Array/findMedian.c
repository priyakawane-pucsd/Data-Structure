#include<stdio.h>

int  medianOFArray(int arr1[],int arr2[],int m,int n)
{ 
 int m1 = arr1[(m-1)/2];
 int n1= arr2[(n-1)/2];
 printf("arr1 median is : %d and arr2 median is : %d\n",m1,n1);

 


 int median =0;
 median = (m1+n1)/2;
 return median;
 

}

int main()
{
 int arr1[] = {1, 12, 15, 26, 38,21,12,11}; 
 int arr2[] = {2, 13, 17, 30, 45,11,23,11}; 
 int m = sizeof(arr1)/sizeof(arr1[0]);
 int n = sizeof(arr2)/sizeof(arr2[0]);
 
 int var = medianOFArray(arr1,arr2,m,n);
 printf("Median is %d\n",var);
}
