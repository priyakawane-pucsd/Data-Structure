//Problem statement :: Program for Decimal To Octal Conversion
#include<stdio.h>
#include<string.h>

int binaryToDecimal(int num)
{
 int temp=num;
  int binary[32];
 int base=1,last_digit=0,i=0,n=0;
 
 while(temp)
 {
  last_digit = temp%8;
  temp = temp/8;
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
 int num = 33;
 //printf("%d\n",n);
 binaryToDecimal(num);
 //printf("%d\n",val);
 return 0;

}
