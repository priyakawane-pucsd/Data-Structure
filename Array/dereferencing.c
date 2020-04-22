#include<stdio.h>
void main()
{
 int val = 12;
 int *iptr = &val;
 int **pptr = &iptr;
 printf("Value is %d\n",val);
 printf("Value by dereferncing operator is %d\n",*iptr);
 printf("Value by dereferncing operator is %d\n",**pptr);
 printf("Value of iptr is %p\n",iptr);
 printf("Value of iptr is %p\n",pptr);
 //return 0;
}
