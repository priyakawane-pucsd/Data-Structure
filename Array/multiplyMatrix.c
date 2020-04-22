//Problem Statement :: Program to multiply two matrices
#include <stdio.h> 
#define N 2 

int multiplicationMatrix(int A[][N],int B[][N],int C[][N])
{
 for(int i=0;i<N;i++)
 {
  for(int j=0;j<N;j++)
  {
    C[i][j] = 0;
   for(int k=0;k<N;k++)
   {
   C[i][j] += A[i][k]*B[k][j];
  }
 }
}
 //return C;
}

int main()
{
	int A[N][N]={{1,2},
		     {3,4}};
	int B[N][N]={{1,1},
		     {1,1}};
	int C[N][N];
	multiplicationMatrix(A,B,C);

	for (int i = 0; i < N; i++) 
       { 
          for (int j = 0; j < N; j++) 
              printf("%d ", C[i][j]); 
          printf("\n"); 
      } 

	return 0;
}
