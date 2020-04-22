//Problem statement :: Program for Decimal To Binary Conversion
#include<stdio.h>
#include<string.h>

int binaryToDecimal(int num)
{
 int temp=num;
  int binary[32];
 int base=1,last_digit=0,i=0,n=0;
 
 while(temp)
 {
  last_digit = temp%2;
  temp = temp/2;
  binary[i]=last_digit;
  i++;
  
  //dec_val += last_digit ;

 }
for(int j=i-1;j>=0;j--)
{
 printf("%d ",binary[j]);
}
}

int main()
{
 int num = 17;
 //printf("%d\n",n);
 binaryToDecimal(num);
 //printf("%d\n",val);
 return 0;

}
