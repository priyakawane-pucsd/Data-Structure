//Problem Statement :: program for substarction of two matrices
#include <stdio.h> 
#define N 4 

int substraction(int A[][N],int B[][N],int C[][N])
{
 for(int i=0;i<N;i++)
 {
  for(int j=0;j<N;j++)
  {
   C[i][j] = A[i][j]-B[i][j];
  }
 }
 return;
}

int main()
{
	int A[N][N]={{1,1,1,1},
			 {2,2,2,2},
			 {3,3,3,3},
			 {4,4,4,4}};
	int B[N][N]={{1,1,1,1},
			 {2,2,2,2},
		 	 {3,3,3,3},
			  {4,4,4,4}};
	int C[N][N];
	substraction(A,B,C);

	for (int i = 0; i < N; i++) 
       { 
          for (int j = 0; j < N; j++) 
              printf("%d ", C[i][j]); 
          printf("\n"); 
      } 

	return 0;
}
