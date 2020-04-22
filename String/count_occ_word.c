#include<stdio.h>
#include<string.h>
 
int main()
{
    char s[1000],w[1000];  
    int i=0,k=0,c,count=0;
 
    printf("Enter  the string : ");
    gets(s);
    printf("Enter word to be searched: ");
    gets(w);
    while(s[i]!='\0')
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
				
				count++;
				k=0;

		}
		i++;
	       	
   }
  if(count==0)
     printf("Word is not prsent in string:");
  else
     printf("%s is occurring %d time in string\n ",w,count);
    return 0;
}
