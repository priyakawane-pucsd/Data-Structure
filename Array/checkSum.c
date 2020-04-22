/*
#include<stdio.h>
void checkSum(int arr[],int n,int x)
{
 for(int i=0;i<n-1;i++)
 {
  if(arr[i]+arr[i+1]== x)
  	printf("There exist two element is array\n");
 }


}
int main()
{
 int arr[] = {1,4,45,6,10,-8};
 int x = 16;
 int n = sizeof(arr)/sizeof(arr[0]);
 checkSum(arr,n,x);
 return 0;
}
*/

//Probblem statement :: Find the element in array such that their sum is equal to given element K?

#include <stdbool.h>
#include <stdio.h> 
#include<stdlib.h>
#define MAX 100
  
void printPairs(int arr[], int arr_size, int sum) 
{ 
  int i, temp; 
  bool s[MAX] = {0}; /*initialize hash set as 0*/
  //int *s = (int *)calloc(sizeof(int),arr_size*2);  
  for (i = 0; i < arr_size; i++) 
  { 
      temp = sum - arr[i]; 
      if (s[temp] == 1) 
      {
         printf("Pair with given sum %d is (%d, %d)\n",sum, arr[i], temp); 
	  }
      s[arr[i]] = 1; 
  } 
} 
  
/* Driver program to test above function */
int main() 
{ 
    int A[] = {1, 4, 45, 6, 5, 10, 8}; 
    int n = 15; 
    int arr_size = sizeof(A)/sizeof(A[0]); 
    printPairs(A, arr_size, n); 

    return 0; 
} 
