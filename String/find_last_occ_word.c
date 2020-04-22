#include<stdio.h>
#include<string.h>
 
int main()
{
    char s[1000],w[1000];  
    int i, k=0,c,index;
    printf("Enter  the string : ");
    gets(s);
    printf("Enter word to be searched: ");
    gets(w);

    int n=strlen(s)-1;
    for(i=n;s[i]!=0;i--)
    {
    	        
		if(s[i]==w[0])
    	{
    		k=1;
    		for(c=1;w[c]!='\0';c++)
    		{
    			if(s[i+c]!=w[c])
	   			{
				 k=0;
				 break;
				}
		}
    	
	}
		if(k==1)
		{
				//index=i;
				printf("word %s  is first occurred at location:%d\n ",w,i);
				break;
		}
		
	       	
   }
   if(k==0)
      printf("word is not occurred in the string \n");
    return 0;
}
