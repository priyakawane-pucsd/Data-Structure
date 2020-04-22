#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define SIZE 8

bool bit_anagram(int a,int b)
{
 int i=0;
 int binary1[SIZE] = {0};
 while(a>0)
 {
  binary1[i]=a%2;
  //printf("%d\n",binary1[i]);
  a = a/2;
  i++;
 }
 
 int j=0;
 int binary2[SIZE] = {0};
 while(b>0)
 {
  binary2[j]=b%2;
 // printf("%d\n",binary2[i]);
  b = b/2;
  j++;
 }
 int val1=0,val2=0,val3=0,val4=0;
 for(int k=0;k<SIZE;k++)
 {
  if(binary1[k]==0)
	val1++;
   if(binary2[k]==0)
	val2++;
   if(binary1[k]==1)
	val3++;
   if(binary2[k]==1)
	val4++;
 }
 
 if(val1==val2 && val3==val4)
 	return true;
 return false;


/* i=0;
 while(i<SIZE)
 {
  printf("%d\n",binary1[i]);
  i++;
 }
 
 printf("**********\n");

 i=0;
 while(i<SIZE)
 {
  printf("%d\n",binary2[i]);
  i++;
 }  */

}

int main()
{
 int a=12,b=4;

 if(bit_anagram(a,b))
	printf("Yes\n");
 else
	printf("No\n"); 
}
