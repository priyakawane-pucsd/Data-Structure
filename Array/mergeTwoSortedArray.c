#include<stdio.h>

void  sortedArray(int ar1[],int ar2[],int ar3[],int n1,int n2)
{
 int k=0,i=0,j=0;
 while(i<n1 && j<n2)
 {
  if(ar1[i]<ar2[j])
  {
    ar3[k] = ar1[i];
     i++;
     k++;
   }
   else
   { 
     ar3[k] = ar2[j];
     j++;
     k++;
   }
 }

 while(i<n1)	//If i not reached upto it's satisfied condition then corner case is:
 {
   ar3[k++] = ar1[i++];
 }
 while(j<n2)	////If j not reached upto it's satisfied condition then corner case is:
 {
   ar3[k++] = ar2[j++];
  } 


 for(int i=0;i<(n1+n2);i++)
 {
  printf("%d ",ar3[i]);
 }

} 

int main()
{
 int ar1[] = {5,8,9,10}; 
 int ar2[] = {4,7,8,11};
 int n1 = sizeof(ar1)/sizeof(ar1[0]); 
 int n2 = sizeof(ar2)/sizeof(ar2[0]);
 int ar3[n1+n2];
 sortedArray(ar1,ar2,ar3,n1,n2); 
 printf("\n");
  return 0;
}
