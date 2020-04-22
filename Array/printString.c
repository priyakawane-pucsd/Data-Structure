#include<stdio.h>

int main()
{
 for(int i=1;i<=100;i++)
 {
  if(i%3==0)
  {
	if(i%5==0)
	{
		printf("%d: %s\n",i,"raja software");
	}
	else
	{
		printf("%d: %s\n",i,"raja");
	}
  }
  else
  {
	printf("%d: %s\n",i,"software");
  }
 }
 return 0;
}
