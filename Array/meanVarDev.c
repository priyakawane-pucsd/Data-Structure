#include<stdio.h>
#include<math.h>
int main()
{
 float arr[] = {2.1,2.9,2.3,2.4,1.8,2.5};
 int  n  = sizeof(arr)/sizeof(arr[0]);
 float mean,var,sd,sum=0.0;
 for(int i=0;i<n;i++)
 {
  sum = sum + arr[i];
 }
 mean = sum/n;
 printf("Arithmatic mean is:%f\n",mean);

 sum = 0.0;	
 for(int i=0;i<n;i++)
 {
  sum = sum+(arr[i]-mean)*(arr[i]-mean); 
 }
 
 var = sum/n;
 sd = sqrt(var);
 printf("Variance is:%f\n",var);
 printf("Standard deviation is:%f\n",sd);
 return 0;
}
