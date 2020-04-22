#include<stdio.h>
#include <stdbool.h>
char *pangrams(char *s) {
    int i=0,count = 0;
    int alpha[26] = {0};
	printf("%s\n",s);

    while(s[i]!='\0')
	{
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i] = s[i]+32;
        }
		i++;
	}

	int j=0;
     while(s[j]!='\0')
     {
         alpha[s[j]-'a']++;
          j++;
     }

  printf("%s\n",s);
	
    for(int m=0;m<26;m++)
    {

		printf("%d\n",alpha[m]);
        if(alpha[m]>0)
        {
            count++;
        }
    }

   printf("%d\n",count);
    if(count==26)
    {
        printf("panagram\n");
    }
    else 
    {
        printf("not panagram\n");
    }

}

int main()
{
    

    char s[100] = "We promptly judged antique ivory buckles for the next prize";
	pangrams(s);

    //char* result = pangrams(s);

    //printf("%s\n", result);

    return 0;
}

