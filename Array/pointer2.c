#include<stdio.h>
/*
int main()
{
 int arr[] = {10,20,30};
 printf("First element of array is %p\n",arr);
 printf("Second element of array is %p\n",arr+1);
 printf("Third element of array is %p\n",arr+2);
 return 0;
}

//2. sizeof array:

int main()
{
 int arr[] = {10,20,30,40,50};
 printf("The result of sizeof operator is %d\n",sizeof(arr));	//5*sizeof(int) = 5*4

 return 0;

}
*/

//3.Array and pointer relationship

int main()
{
 int arr[] = {10,20,30,40,50};
 printf("Elements in the array are: %d %d %d\n",arr[0],arr[1],arr[2]);
 printf("Elements are: %d %d %d\n",*(arr+0),*(arr+1),*(arr+2));
 printf("Elements are: %d %d %d\n",0[arr],1[arr],2[arr]);
 return 0;
}
