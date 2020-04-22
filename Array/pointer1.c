#include<stdio.h>
/*
int main()
{
 int val = 12;
 int *iptr = &val;
 int **pptr = &iptr; 
 printf("value is %d \n",val);
 printf("value by dereference iptr is %d\n",*iptr);
 printf("value by deferencing operator is %d\n",**pptr);
 printf("value of iptr is:%p\n",iptr);
 printf("value of pptr is:%p\n",pptr);
 return 0;


}

*/

int main()
{
 int val = 10;
 //int *ptr = val;		//pointer variable ptr cannot hold an integer value val
 int *ptr = &val;
 printf("value of variable is %d\n",val);
 printf("Pointer holds %p\n",ptr);

 return 0;
}
