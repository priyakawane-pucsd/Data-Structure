#include<stdio.h>

//1.complexity :- O(n^2)
/*
int printMaxDiffernce(int arr[],int n)
{
 int max_diff = arr[1]-arr[0];
 for(int i=0;i<n;i++)
 {
  for(int j=i+1;j<n;j++)
  {
    if(arr[j]-arr[i]>max_diff)
            max_diff = arr[j]-arr[i];
  }
 }

 return max_diff;
}

int main()
{
 //int arr[] = {2, 3, 10, 6, 4, 8, 1};
 int arr[] = {1, 2, 8, 10, 10, 12, 19};
 int n = sizeof(arr)/sizeof(arr[0]);
 int var =printMaxDiffernce(arr,n);
 printf("Maximum differnce is %d\n",var);

 return 0;
}
*/

int printMaxDiffernce(int arr[],int n)
{
 int min_element = arr[0];
 int max_diff = arr[1]-arr[0];
 for(int i=1;i<n;i++)
 {
  if(arr[i]-min_element > max_diff)
     max_diff = arr[i]-min_element;

  if(arr[i] < min_element) 
        min_element = arr[i];  
 }
  return max_diff;
}


int main()
{
 //int arr[] = {1, 3, 0, 6, 4, 8,1};
 int arr[] = {96, 10, 88, 3, 1,97};
 int n = sizeof(arr)/sizeof(arr[0]);
 int var = printMaxDiffernce(arr,n);
 printf("Maximum differnce is %d\n",var);

 return 0;
}
