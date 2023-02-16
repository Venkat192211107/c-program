#include<stdio.h>
int main()
{
	char str[20],*pt;
	int i =0;
	printf("pointer example program:find or calculate length of string\n");
	printf("enter any string [below 20 chars]");
	gets(str);
	pt = str;
	while(*pt!='\0')
	{
		i++;
		pt++;
	}
	printf("length of string:%d",i);
	return 0;
}
