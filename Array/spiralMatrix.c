#include<stdio.h>
# define R 3
# define C 4

int printSpiral(int a[R][C],int m,int n)
{
 int k=0,l=0;	// k--->start index of row l--->start index of column

 while(k<m && l<n)
 {
  
  for(int i=l;i<n;i++)
  {
   printf("%d ",a[k][i]);
  }
   k++;

  for(int i=k;i<m;i++)
  {
   printf("%d ",a[i][n-1]);
  }
  n--;
 
 if(k<m)
 {
  for(int i=n-1;i>=l;i--)
  {
     printf("%d ",a[m-1][i]);
  }
  m--;

 }

 if(l<n)
 {
  for(int i=m-1;i>=k;--i)
  {
   printf("%d ",a[i][l]);
  }
  l++;

  }
printf("%d \n",k);
 }
}


int main()
{
 int a[R][C] = {{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		/*{13,14,15,16}*/};

 printSpiral(a,R,C);
 printf("\n");
 return 0;
}
