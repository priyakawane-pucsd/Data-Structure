#include<stdio.h>
#include<stdlib.h>

/*
int main()
{
 int a=100;
 int *iptr = &a;
 printf("The iptr holds the address of variable 'a' is : %p\n ",iptr);
 return 0;
}

*/

int main()
{
 int *iptr;
 char *cptr;
 float *fptr;
 printf("Pointer to character takes %d bytes\n",sizeof(cptr));
 printf("Pointer to integer takes %d bytes\n",sizeof(iptr));
 printf("Pointer to float takes %d bytes\n",sizeof(fptr));

 return 0;

}

