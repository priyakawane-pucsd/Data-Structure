#include<stdio.h>
#include<string.h>

int main()
{
 char str1[200],str2[200];
 int i=0,j=0,k=0,count=0;
 printf("Enter string:\t");
 gets(str1);
 puts("----------");
 puts(str1);
 printf("Enter string to be search:\t");
 gets(str2);
 puts("----------");
 puts(str2);
 
 while(str1[i]!='\0')
 {
   while(str2[k]!='\0')
   {
    if(str1[j]==str2[k])
      {
	j++;
	k++;
      }
    else
    {
     j=i+1;
     break;
    }

    if(str2[k]=='\0')
    {
	count++;
    }
   }

   if(str2[k]=='\0')
   {
      i=j;
   }
   else
   {
	i++;
   }


  i++;
 }
 
 if(count==0)
    printf("String \"%s\" does not exist in given string\n",str2);
 else
    printf("String \"%s\" exist %d times\n",str2,count);
    
 return 0;
}
