//Problem statement :: Program for Binary To Decimal Conversion
#include<stdio.h>
#include<string.h>

int binaryToDecimal(int num)
{
 int temp=num;
 int base=1,last_digit=0,dec_val=0;
 
 while(temp)
 {
  last_digit = temp%10;
  temp = temp/10;
 
  dec_val += last_digit * base;

  base = base*2;
 }
 return dec_val;
}

int main()
{
 int num =100011;
 //printf("%d\n",n);
 int val = binaryToDecimal(num);
 printf("%d\n",val);
 return 0;

}
