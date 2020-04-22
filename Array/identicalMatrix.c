//Problem Statement :: Program to check whether two matrix are identical or not
#include<stdio.h>
#include<stdlib.h>
# define N 4

int  identicalMatrix(int arr1[N][N],int arr2[N][N])
{
 for(int i=0;i<N;i++)
 {
  for(int j=0;j<N;j++)
  {
   if(arr1[i][j]!=arr2[i][j])
	return 0;
  }
 }
 return 1;
}


int main()
{
 int arr1[N][N]={{1,1,1,1},
		 {2,2,2,2},
		 {3,3,3,3},
		 {4,4,4,4}};

 int arr2[N][N]={{1,1,1,1},
		 {2,2,2,2},
		 {3,3,3,3},
		 {4,4,5,4}};
 int n1 = sizeof(arr1)/sizeof(arr1[0]);
 int n2 = sizeof(arr2)/sizeof(arr2[0]);

 if(identicalMatrix(arr1,arr2))
 {
  printf("Both matrix are identical\n");
 }
 else
 {
  printf("Both matrix are not idetical\n");
 }
// printf("%d\n",n);

 return 0;
}
