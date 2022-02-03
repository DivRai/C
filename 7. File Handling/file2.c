#include<stdio.h>
void main()
{
	FILE *fp;
	char s[50];
	char c;
	fp=fopen("hello.txt","r");
	do
	{
		c=getc(fp);
		printf("%c",c);
	}
	while(c!=EOF);
	fclose(fp);
}
