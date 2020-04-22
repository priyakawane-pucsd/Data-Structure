//Problem statement :: C Program to find transpose of a matrix
#include<stdio.h>
#include<stdlib.h>
# define M 3
# define N 4

//By using one extra matrix
int transpose(int A[M][N],int B[N][M])
{
 for(int i=0;i<M;i++)
 {
  for(int j=0;j<N;j++)
  {
   B[j][i]=A[i][j];
  }
 }
 return;
}

int main()
{
 int A[M][N] = { {1, 1, 1, 1}, 
                    {2, 2, 2, 2}, 
                    {3, 3, 3, 3}}; 
 int B[N][M];
 transpose(A,B);
 for (int i = 0; i < N; i++) 
    { 
        for (int j = 0; j < M; j++) 
           printf("%d ", B[i][j]); 
        printf("\n"); 
    } 

 return 0;
}

/*
//By using one matrix 
int  transpose(int A[M][N])
{
 for(int i=0;i<M;i++)
 {
  for(int j=i+1;j<N;j++)
  {
   int temp = A[i][j];
   A[i][j] = A[j][i];
   A[j][i] = temp;
  }
 }
return ;
}

int main()
{
 int A[M][N] = { {1, 1, 1, 1}, 
                    {2, 2, 2, 2}, 
                    {3, 3, 3, 3},
		    {4, 4, 4, 4}}; 
 transpose(A);
 for (int i = 0; i < M; i++) 
    { 
        for (int j = 0; j < N; j++) 
           printf("%d ", A[i][j]); 
        printf("\n"); 
    } 
  
 

 return 0;
}
*/

