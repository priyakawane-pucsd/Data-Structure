#include<stdio.h>
int main()
{
 int num;
 printf("How long array size is:\n");
 scanf("%d",&num);
 int arr[num],min,max;
 printf("Enter array elements:\n");
 for(int i=0;i<num;i++)
 {
  scanf("%d",&arr[i]);
 }
 min=max = arr[0];
 for(int i=0;i<num;i++)
 {
  if(arr[i]<min)
       min = arr[i];
  else if(arr[i]>max)
	max = arr[i];
 }
 printf("Maximum element i array is %d:\n",max);
 printf("Minimum element in array is %d:\n",min);
 
 return 0;

}
