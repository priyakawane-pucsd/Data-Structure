#include<stdio.h>
#include<string.h>

char superReduceString(char *str,int n)
{
 int alpha[26]={0};

 char *s1[12];
 for(int i=0;i<n;i++)
 {
   alpha[str[i]-'a']++;
 } 

 //int m = sizeof(aplha)/sizeof(aplha[0]);

 //int n = strlen(str);
int k=0,m=0;
 for(int i=0;i<26;i++)
 {
   printf("%d : %d\n",k,alpha[i]);
   k++;
 }

 for(int i=0;i<26;i++)
 {
	if(alpha[i]!=0 && alpha[i]%2!=0)
	{
		s1[m] = alpha[i];
		printf("%s\n",s1[m]);
		m++;
	}
 }


//printf("%s\n",s1);

//printf("\n");
}

int main()
{
 char *str = "aaabbcddd";
 int n=strlen(str);
 superReduceString(str,n);
 return 0;

}
