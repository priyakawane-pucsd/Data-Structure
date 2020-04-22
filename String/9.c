#include<stdio.h>
#include<string.h>

int main()
{
 char str[15]="Hello Readers";
 strcat(str,'!');		// code compilation gives 'cannot convert char to char*' error
 puts(str);
 return 0;
}

//The rectified call to function is strcat(str,"!")
